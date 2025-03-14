#include <TFile.h>
#include <TH3D.h>
#include <TH1D.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TPad.h>
#include <TStyle.h>
#include <iostream>
#include <vector>

TH1D* DivideHistograms(const TH1D* h1, const TH1D* h2, const char* newHistName) {
    if (!h1 || !h2) {
        std::cerr << "Error: Null histogram pointer passed!" << std::endl;
        return nullptr;
    }

    // Clone h1 to create the output histogram (preserving binning)
    TH1D* h_result = (TH1D*)h1->Clone(newHistName);
    h_result->Reset();  // Clear bin contents

    // Loop over bins and perform division
    for (int i = 1; i <= h1->GetNbinsX(); i++) {  // 1-based indexing in ROOT
        double content1 = h1->GetBinContent(i);
        double content2 = h2->GetBinContent(i);

        double error1 = h1->GetBinError(i);
        double error2 = h2->GetBinError(i);

        // Avoid division by zero
        if (content2 == 0) {
            h_result->SetBinContent(i, 0);
            h_result->SetBinError(i, 0);
            continue;
        }

        // Compute new bin content (ratio)
        double new_content = content1 / content2;

        // Compute error assuming strong positive correlation (ρ ≈ 1)
        double relative_error = TMath::Abs((error1 / content1) - (error2 / content2));  // |(σ1/X1) - (σ2/X2)|
        double new_error = TMath::Abs(new_content * relative_error);  // Propagated error

        // Set new bin content and error
        h_result->SetBinContent(i, new_content);
        h_result->SetBinError(i, new_error);
    }

    return h_result;
}

void FillWeightedSum(TH2* h2, TH1* h1) {
    if (!h2 || !h1) {
        std::cerr << "Error: Null histogram pointer provided!" << std::endl;
        return;
    }
    h1->Sumw2();
    int nBinsX = h2->GetNbinsX();
    for (int i = 1; i <= nBinsX; ++i) {
        int nBinsY = h2->GetNbinsY();
        double weightedSum = 0;
        double sumOfWeights = 0;
        double weightedErrorSquared = 0; // To accumulate squared errors
        for (int j = 1; j <= nBinsY; ++j) {
            double binContent = h2->GetBinContent(i, j);
             double binError = h2->GetBinError(i, j);
            double binCenterY = h2->GetYaxis()->GetBinCenter(j); // Bin center in Y direction
            
            // Compute weight as the bin center in Y direction
            double weight = binCenterY;
            
            // Accumulate weighted sum and sum of weights
            weightedSum += binContent * weight;
            sumOfWeights += weight;
             weightedErrorSquared += (binError*binError * weight*weight);
        }
        double weightedError = std::sqrt(weightedErrorSquared);  // Square root of accumulated squared errors
        // Fill the 1D histogram bin
        h1->SetBinContent(i, weightedSum); // Using the weighted sum directly
        h1->SetBinError(i, weightedError);
    }
    h1->Scale(1.,"width");
}


void CheckEmbeddingClosureEEC() {
    std::string filename = "~/Desktop/pbpbAnalysis5Tev/EmbeddingOutEEC.root";
    std::string filename_cfac = "~/Desktop/pbpbAnalysis5Tev/EmbeddingOutEEC.root";
    // Open the ROOT file
    TFile* file = TFile::Open(filename.c_str(), "READ");
    if (!file || file->IsZombie()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }
    TFile* f3 = TFile::Open(filename_cfac.c_str(), "READ");
    if (!file || file->IsZombie()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }
    int pt1 = 90;
    int pt2 = 120;
    int pt1_tru = 10;
    int pt2_tru = 140;
    
    std::string tag = "cFactor";
    TLatex latex1;TLatex latex2;TLatex latex3;TLatex latex4;TLatex latex5;TLatex latex6;TLatex latex7;
    latex1.SetNDC();latex2.SetNDC();latex3.SetNDC();latex4.SetNDC();latex5.SetNDC();latex6.SetNDC();latex7.SetNDC();
    latex1.SetTextFont(42);latex2.SetTextFont(42);latex3.SetTextFont(42);latex4.SetTextFont(42);latex5.SetTextFont(42);latex6.SetTextFont(42);latex7.SetTextFont(42);
    latex1.SetTextSize(0.035);latex2.SetTextSize(0.035);latex3.SetTextSize(0.035);latex4.SetTextSize(0.035);latex5.SetTextSize(0.035);latex6.SetTextSize(0.035);latex7.SetTextSize(0.035);
    const char *str1 = "#it{p}^{track}_{T}";
    const char *str2 = "anti-#it{k}_{T}, ch-particle jets";
    const char *str3 = "#sqrt{#it{s}_{NN}} = 5.02 TeV";
    const char *str4 = "|#it{#eta}_{jet}|";
    const char *str5 = "#it{p}^{jet,reco}_{T}";
    const char *str6 = "#it{p}^{jet,true}_{T}";
    const char *str7 = "#frac{d#it{#sigma}_{E3C}/d#it{R}_{L}}{d#it{#sigma}_{EEC}/d#it{R}_{L}}";
    const char *str8 = "#it{p}^{jet,pythia}_{T}";
    const char *strR = "#it{R}_{L}";
    
    bool ifCorrectHistograms = true;
    bool drawBasic = false;
    bool ifDrawCfac = true;
    bool bmb = false;
    bool jmb = false;
    bool if1D = false;
    bool if3D = true;
    TH3D* h3_MJ = (TH3D*)file->Get("h_MJ");
    TH3D* h3_MJ0 = (TH3D*)file->Get("h_MJ0");
    TH3D* h3_MJ1 = (TH3D*)file->Get("h_MJ1");
    TH3D* h3_MJ2 = (TH3D*)file->Get("h_MJ2");
    TH3D* h3_MJ3 = (TH3D*)file->Get("h_MJ0");
    
    int pt1bin = h3_MJ0->FindBin(pt1);
    int pt2bin = h3_MJ0->GetXaxis()->FindBin(pt2-1);
    
    int pt1bin_tru = h3_MJ0->FindBin(pt1_tru);
    int pt2bin_tru = h3_MJ0->GetXaxis()->FindBin(pt2_tru-1);
    
    
    TH1D* h1_MJ = h3_MJ->ProjectionZ("h1_MJ", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
    h1_MJ->Sumw2();
    h1_MJ->SetName("total");
    h1_MJ->Scale(1.,"width");
    TH1D* h1_MJ0 = h3_MJ0->ProjectionZ("h1_MJ0", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
    h1_MJ0->SetName("bb");
    h1_MJ0->Sumw2();
    h1_MJ0->Scale(1.,"width");
    TH1D* h1_MJ1 = h3_MJ1->ProjectionZ("h1_MJ1", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
    h1_MJ1->SetName("sb");
    h1_MJ1->Sumw2();
    h1_MJ1->Scale(1.,"width");
    TH1D* h1_MJ2 = h3_MJ2->ProjectionZ("h1_MJ2", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
    h1_MJ2->SetName("ss");
    h1_MJ2->Sumw2();
    h1_MJ2->Scale(1.,"width");
    
    if(drawBasic){
        TH1D* histograms[] = {
            h1_MJ, h1_MJ0, h1_MJ1, h1_MJ2
        };
        // Define colors for better visualization
        int colors[] = {kRed, kBlue, kGreen+2, kMagenta, kCyan, kBlack};
        int markers[] = {20, 21, 22, 23, 24, 25}; // Different marker styles
        
        // Create a canvas
        TCanvas* c1 = new TCanvas("c1", "Histogram Comparison", 800, 600);
        c1->cd();
        gPad->SetLogx();
        // Create a legend
        TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
        legend->SetBorderSize(0);
        
        // Loop through histograms, set styles, and draw them
        for (int i = 0; i < 4; i++) {
            histograms[i]->SetLineColor(colors[i]);
            histograms[i]->SetLineWidth(2);
            histograms[i]->SetStats(0);
            histograms[i]->SetMarkerStyle(markers[i]); // Set different marker styles
            histograms[i]->SetMarkerColor(colors[i]); // Set different marker styles
            histograms[i]->SetMarkerSize(0.8);
            histograms[i]->SetTitle("");
            histograms[i]->GetXaxis()->SetTitle(strR);
            histograms[i]->GetYaxis()->SetTitle("EEC");
            if (i == 0)
                histograms[i]->Draw(""); // Draw first histogram
            else
                histograms[i]->Draw("SAME"); // Overlay the rest
            
            legend->AddEntry(histograms[i], histograms[i]->GetName(), "l");
        }
        legend->Draw("same");
        
        latex1.DrawLatex(0.15, 0.60, Form("%i < %s < %i GeV/#it{c} ",pt1 ,str5,pt2));
        latex2.DrawLatex(0.15, 0.65, Form("%i < %s < %i GeV/#it{c}", pt1_tru,str6,pt2_tru));
        // latex7.DrawLatex(0.15, 0.55, Form("%.1f < %s < %.1f", low_pt_tru,str8,high_pt_tru));
        
        latex3.DrawLatex(0.15,0.70 ,Form("%s > 1.0 GeV/#it{c}", str1));
        latex4.DrawLatex(0.15,0.75 ,Form("#it{R} = 0.4, %s < 0.5", str4));
        latex5.DrawLatex(0.15,0.80 ,Form("%s", str2));
        latex6.DrawLatex(0.15,0.85 ,Form("%s, ALICE PYTHIA+GEANT (pthat14)", str3));
    }
    if(ifCorrectHistograms){
        
        if(if1D){
            //    //Correct histograms PP'
            TH3D* h3_MB1MB2 = (TH3D*)file->Get("h_MB1MB2");
            TH3D* h3_MB1MB2_m = (TH3D*)file->Get("h_MB1MB2_m");
            TH3D* h3_MB1MB2_um = (TH3D*)file->Get("h_MB1MB2_um");
            
            TH3D* h3_BMB = (TH3D*)file->Get("h_BMB");
            TH3D* h3_BMB_m = (TH3D*)file->Get("h_BMB_m");
            TH3D* h3_BMB_um = (TH3D*)file->Get("h_BMB_um");
            
            int pt1bin = h3_MB1MB2->FindBin(pt1);
            int pt2bin = h3_MB1MB2->GetXaxis()->FindBin(pt2-1);
            
            int pt1bin_tru = h3_MB1MB2->FindBin(pt1_tru);
            int pt2bin_tru = h3_MB1MB2->GetXaxis()->FindBin(pt2_tru-1);
            
            TH1D* h1_BMB = h3_BMB->ProjectionZ("h1_BMB", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_BMB->Sumw2();
            h1_BMB->SetName("bb'");
            h1_BMB->Scale(1., "width");
            TH1D* h1_MB1MB2 = h3_MB1MB2->ProjectionZ("h1_MB1MB2", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MB1MB2->SetName("b'b''");
            h1_MB1MB2->Sumw2();
            h1_MB1MB2->Scale(1., "width");
            TH1D* h1_MB1MB2_m = h3_MB1MB2_m->ProjectionZ("h1_MB1MB2_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MB1MB2_m->SetName("b'b'' matched jets");
            h1_MB1MB2_m->Sumw2();
            h1_MB1MB2_m->Scale(1., "width");
            TH1D* h1_MB1MB2_um = h3_MB1MB2_um->ProjectionZ("h1_MB1MB2_um", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MB1MB2_um->SetName("b'b'' unmatched jets");
            h1_MB1MB2_um->Sumw2();
            h1_MB1MB2_um->Scale(1., "width");
            TH1D* h1_BMB_m = h3_BMB_m->ProjectionZ("h1_BMB_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_BMB_m->SetName("bb' matched jets");
            h1_BMB_m->Sumw2();
            h1_BMB_m->Scale(1., "width");
            TH1D* h1_BMB_um = h3_BMB_um->ProjectionZ("h1_BMB_um", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_BMB_um->SetName("bb' unmatched jets");
            h1_BMB_um->Sumw2();
            h1_BMB_um->Scale(1., "width");
            
            if(bmb){
                TH1D* histograms[] = {
                    h1_BMB, h1_MB1MB2, h1_MB1MB2_m, h1_MB1MB2_um, h1_BMB_m, h1_BMB_um
                };
                // Define colors for better visualization
                int colors[] = {kRed, kBlue, kGreen+2, kMagenta, kCyan, kBlack};
                
                // Create a canvas
                TCanvas* c1 = new TCanvas("c1", "Histogram Comparison", 800, 600);
                c1->cd();
                gPad->SetLogx();
                // Create a legend
                TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
                legend->SetBorderSize(0);
                
                // Loop through histograms, set styles, and draw them
                for (int i = 0; i < 6; i++) {
                    histograms[i]->SetLineColor(colors[i]);
                    histograms[i]->SetLineWidth(2);
                    histograms[i]->SetStats(0);
                    //            histograms[i]->SetMarkerStyle(markers[i]); // Set different marker styles
                    //            histograms[i]->SetMarkerColor(colors[i]); // Set different marker styles
                    histograms[i]->SetMarkerSize(0.8);
                    histograms[i]->SetTitle("");
                    histograms[i]->GetXaxis()->SetTitle(strR);
                    histograms[i]->GetYaxis()->SetTitle("EEC");
                    if (i == 0)
                        histograms[i]->Draw(""); // Draw first histogram
                    else
                        histograms[i]->Draw("SAME"); // Overlay the rest
                    
                    legend->AddEntry(histograms[i], histograms[i]->GetName(), "l");
                }
                legend->Draw("same");
                latex1.DrawLatex(0.15, 0.60, Form("%i < %s < %i GeV/#it{c} ",pt1 ,str5,pt2));
                latex2.DrawLatex(0.15, 0.65, Form("%i < %s < %i GeV/#it{c}", pt1_tru,str6,pt2_tru));
                // latex7.DrawLatex(0.15, 0.55, Form("%.1f < %s < %.1f", low_pt_tru,str8,high_pt_tru));
                
                latex3.DrawLatex(0.15,0.70 ,Form("%s > 1.0 GeV/#it{c}", str1));
                latex4.DrawLatex(0.15,0.75 ,Form("#it{R} = 0.4, %s < 0.5", str4));
                latex5.DrawLatex(0.15,0.80 ,Form("%s", str2));
                latex6.DrawLatex(0.15,0.85 ,Form("%s, ALICE PYTHIA+GEANT (pthat14)", str3));
            }
            
            TH1D* h1_MB1MB2_matched =(TH1D*)h1_MB1MB2->Clone("h1_MB1MB2_matched");//correct the matched contribution
            TH1D* h1_MB1MB2_corr_m = (TH1D*)h1_MB1MB2->Clone("h1_MB1MB2_corr_m");
            h1_MB1MB2_corr_m->Divide(h1_BMB_m);
            h1_MB1MB2_corr_m->GetXaxis()->SetRangeUser(0.01,0.4);
            h1_MB1MB2_corr_m->GetYaxis()->SetRangeUser(0.,2.0);
            h1_MB1MB2_corr_m->GetYaxis()->SetTitle("Ratio");
            
            TH1D* h1_MB1MB2_unmatched =(TH1D*)h1_MB1MB2->Clone("h1_MB1MB2_unmatched");//correct the unmatched contribution
            TH1D* h1_MB1MB2_corr_um = (TH1D*)h1_MB1MB2->Clone("h1_MB1MB2_corr_um");
            h1_MB1MB2_corr_um->Divide(h1_BMB_um);
            h1_MB1MB2_corr_um->GetXaxis()->SetRangeUser(0.01,0.4);
            h1_MB1MB2_corr_um->GetYaxis()->SetRangeUser(0.,2.0);
            h1_MB1MB2_corr_um->GetYaxis()->SetTitle("Ratio");
            
            //correct by cfac
            h1_MB1MB2_matched->Divide(h1_MB1MB2_corr_m);
            h1_MB1MB2_matched->SetLineColor(kGreen+2);
            h1_MB1MB2_matched->SetMarkerColor(kGreen+2);
            //        h1_MB1MB2_matched->Draw();
            //        h1_BMB_m->Draw("same");
            
            //correct by cfac
            h1_MB1MB2_unmatched->Divide(h1_MB1MB2_corr_um);
            //        h1_MB1MB2_unmatched->Draw("same");
            //        h1_BMB_um->Draw("same,HIST");
            TH1D* h1_MB1MB2_corrected =(TH1D*)h1_MB1MB2_matched->Clone("h1_MB1MB2_corrected");//add corrected matched and unmatched contributions
            h1_MB1MB2_corrected->Add(h1_MB1MB2_unmatched);
            
            //       h1_BMB->Draw("same");
            /// h1_MB1MB2_unmatched = h1_BMB_um ---and--- h1_MB1MB2_matched = h1_BMB_m ---and--- h1_BMB_m+h1_BMB_um = h1_BMB --then-- h1_MB1MB2_matched+h1_MB1MB2_unmatched =h1_BMB
            //DRAW CORRECTED HISTOGRAMS
            h1_MB1MB2_corrected->Draw();
            h1_BMB->SetLineColor(kRed);
            h1_BMB->Draw("same,HIST");
            
            ////############################//#################################//#################################
            
            //        //    //Correct histograms PP
            TH3D* h3_MB1 = (TH3D*)file->Get("h_MB1");
            TH3D* h3_MB1_m = (TH3D*)file->Get("h_MB1_m");
            TH3D* h3_MB1_um = (TH3D*)file->Get("h_MB1_um");
            TH3D* h3_MJ0 = (TH3D*)file->Get("h_MJ0");
            TH3D* h3_MJ0_m = (TH3D*)file->Get("h_MJ0_m");
            TH3D* h3_MJ0_um = (TH3D*)file->Get("h_MJ0_um");
            
            TH1D* h1_MJ0 = h3_MJ0->ProjectionZ("h1_MJ0", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ0->Sumw2();
            h1_MJ0->Scale(1., "width");
            TH1D* h1_MJ0_m = h3_MJ0_m->ProjectionZ("h1_MJ0_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ0_m->Sumw2();
            h1_MJ0_m->Scale(1., "width");
            TH1D* h1_MJ0_um = h3_MJ0_um->ProjectionZ("h1_MJ0_um", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ0_um->Sumw2();
            h1_MJ0_um->Scale(1., "width");
            TH1D* h1_MB1 = h3_MB1->ProjectionZ("h1_MB1", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MB1->Sumw2();
            h1_MB1->Scale(1., "width");
            TH1D* h1_MB1_m = h3_MB1_m->ProjectionZ("h1_MB1_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MB1_m->Sumw2();
            h1_MB1_m->Scale(1., "width");
            TH1D* h1_MB1_um = h3_MB1_um->ProjectionZ("h1_MB1_um", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MB1_um->Sumw2();
            h1_MB1_um->Scale(1., "width");
            
            TH1D* h1_MB1_matched =(TH1D*)h1_MB1->Clone("h1_MB1_matched");//correct the matched contribution
            TH1D* h1_MB1_corr_m = (TH1D*)h1_MB1->Clone("h1_MB1_corr_m");
            h1_MB1_corr_m->Divide(h1_MJ0_m);
            h1_MB1_corr_m->GetXaxis()->SetRangeUser(0.01,0.4);
            h1_MB1_corr_m->GetYaxis()->SetRangeUser(0.,2.0);
            h1_MB1_corr_m->GetYaxis()->SetTitle("Ratio");
            
            
            TH1D* h1_MB1_unmatched =(TH1D*)h1_MB1->Clone("h1_MB1_unmatched");//correct the unmatched contribution
            TH1D* h1_MB1_corr_um = (TH1D*)h1_MB1->Clone("h1_MB1_corr_um");
            h1_MB1_corr_um->Divide(h1_MJ0_um);
            h1_MB1_corr_um->GetXaxis()->SetRangeUser(0.01,0.4);
            h1_MB1_corr_um->GetYaxis()->SetRangeUser(0.,2.0);
            h1_MB1_corr_um->GetYaxis()->SetTitle("Ratio");
            
            h1_MB1_matched->Divide(h1_MB1_corr_m);
            h1_MB1_matched->SetLineColor(kGreen);
            //        h1_MB1_matched->Draw();
            //        h1_MJ0_m->Draw("same");
            
            h1_MB1_unmatched->Divide(h1_MB1_corr_um);
            //        h1_MB1_unmatched->Draw("same");
            //        h1_MJ0_um->Draw("same,HIST");
            
            TH1D* h1_MB1_corrected =(TH1D*)h1_MB1_matched->Clone("h1_MB1_corrected");//add corrected matched and unmatched contributions
            h1_MB1_corrected->Add(h1_MB1_unmatched);
            
            //        //DRAW CORRECTED HISTOGRAMS
            h1_MB1_corrected->Draw();
            h1_MJ0->SetLineColor(kRed);
            h1_MJ0->Draw("same,HIST");
            
            
            
            ////############################//#################################//#################################
            //        //    //Correct histograms JP
            TH3D* h3_JMB = (TH3D*)file->Get("h_JMB");
            TH3D* h3_SMB = (TH3D*)file->Get("h_SMB");
            TH3D* h3_SMB_m = (TH3D*)file->Get("h_SMB_m");
            TH3D* h3_JMB_m = (TH3D*)file->Get("h_BMB_m");
            h3_JMB_m->SetName("h_JMB_m");
            h3_JMB_m->Add(h3_SMB_m);
            TH3D* h3_JMB_um = (TH3D*)file->Get("h_JMB_um");
            TH3D* h3_MJ1 = (TH3D*)file->Get("h_MJ1");
            TH3D* h3_MJ1_m = (TH3D*)file->Get("h_MJ1_m");
            TH3D* h3_MJ1_um = (TH3D*)file->Get("h_MJ1_um");
            
            TH1D* h1_SMB = h3_SMB->ProjectionZ("h1_SMB", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_SMB->Sumw2();
            h1_SMB->Scale(1., "width");
            TH1D* h1_SMB_m = h3_SMB_m->ProjectionZ("h1_SMB_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_SMB_m->Sumw2();
            h1_SMB_m->Scale(1., "width");
            TH1D* h1_JMB = h3_JMB->ProjectionZ("h1_JMB", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_JMB->Sumw2();
            h1_JMB->Scale(1., "width");
            TH1D* h1_JMB_m = h3_JMB_m->ProjectionZ("h1_JMB_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_JMB_m->Sumw2();
            h1_JMB_m->Scale(1., "width");
            TH1D* h1_JMB_um = h3_JMB_um->ProjectionZ("h1_JMB_um", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_JMB_um->Sumw2();
            h1_JMB_um->Scale(1., "width");
            TH1D* h1_MJ1 = h3_MJ1->ProjectionZ("h1_MJ1", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ1->Sumw2();
            h1_MJ1->Scale(1., "width");
            TH1D* h1_MJ1_m = h3_MJ1_m->ProjectionZ("h1_MJ1_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ1_m->Sumw2();
            h1_MJ1_m->Scale(1., "width");
            TH1D* h1_MJ1_um = h3_MJ1_um->ProjectionZ("h1_MJ1_um", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ1_um->Sumw2();
            h1_MJ1_um->Scale(1., "width");
            
            TH1D* h1_SMB_corr = (TH1D*)h1_SMB_m->Clone("h1_SMB_corr");
            //        TH1D* h1_JMB_corrected = (TH1D*)h1_JMB->Clone("h1_JMB_corrected");
            h1_SMB_corr->Divide(h1_MJ1_m);
            
            
            if(jmb){
                TH1D* histograms[] = {
                    h1_JMB, h1_SMB_m, h1_BMB_m,h1_BMB_um
                };
                
                // Define colors for better visualization
                int colors[] = {kRed, kBlue, kGreen+2, kMagenta, kCyan, kBlack};
                
                // Create a canvas
                TCanvas* c1 = new TCanvas("c21", "Histogram Comparison", 800, 600);
                c1->cd();
                gPad->SetLogx();
                // Create a legend
                TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
                legend->SetBorderSize(0);
                
                // Loop through histograms, set styles, and draw them
                for (int i = 0; i < 2; i++) {
                    histograms[i]->SetLineColor(colors[i]);
                    histograms[i]->SetLineWidth(2);
                    histograms[i]->SetStats(0);
                    //            histograms[i]->SetMarkerStyle(markers[i]); // Set different marker styles
                    //            histograms[i]->SetMarkerColor(colors[i]); // Set different marker styles
                    histograms[i]->SetMarkerSize(0.8);
                    histograms[i]->SetTitle("");
                    histograms[i]->GetXaxis()->SetTitle(strR);
                    histograms[i]->GetYaxis()->SetTitle("EEC");
                    if (i == 0)
                        histograms[i]->Draw(""); // Draw first histogram
                    else
                        histograms[i]->Draw("SAME"); // Overlay the rest
                    
                    legend->AddEntry(histograms[i], histograms[i]->GetName(), "l");
                }
                legend->Draw("same");
                latex1.DrawLatex(0.15, 0.60, Form("%i < %s < %i GeV/#it{c} ",pt1 ,str5,pt2));
                latex2.DrawLatex(0.15, 0.65, Form("%i < %s < %i GeV/#it{c}", pt1_tru,str6,pt2_tru));
                // latex7.DrawLatex(0.15, 0.55, Form("%.1f < %s < %.1f", low_pt_tru,str8,high_pt_tru));
                
                latex3.DrawLatex(0.15,0.70 ,Form("%s > 1.0 GeV/#it{c}", str1));
                latex4.DrawLatex(0.15,0.75 ,Form("#it{R} = 0.4, %s < 0.5", str4));
                latex5.DrawLatex(0.15,0.80 ,Form("%s", str2));
                latex6.DrawLatex(0.15,0.85 ,Form("%s, ALICE PYTHIA+GEANT (pthat14)", str3));
            }
            //Construct jmb corrected with using signal only from matched jets
            TH1D* h1_JMB_corrected = (TH1D*)h1_SMB_m->Clone("h1_JMB_corrected");
            h1_JMB_corrected->Add(h1_BMB_m);
            h1_JMB_corrected->Add(h1_BMB_um);
            h1_JMB_corrected->Add(h1_MB1MB2_corrected,-1);
            h1_JMB_corrected->Divide(h1_SMB_corr);
            
            h1_JMB_corrected->SetLineColor(kBlue);
            h1_JMB_corrected->Draw();
            h1_MJ1_m->SetLineColor(kRed);
            //        h1_MJ1_m->Draw("same");
            //
            
            TH3D* h3_MJ = (TH3D*)file->Get("h_MJ");
            TH3D* h3_MJ_m = (TH3D*)file->Get("h_MJ_m");
            TH3D* h3_MJ2 = (TH3D*)file->Get("h_MJ2");
            TH3D* h3_MJ2_m = (TH3D*)file->Get("h_MJ2_m");
            TH3D* h3_MJ2_um = (TH3D*)file->Get("h_MJ2_um");
            
            TH1D* h1_MJ = h3_MJ->ProjectionZ("h1_MJ", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ->Sumw2();
            h1_MJ->Scale(1., "width");
            TH1D* h1_MJ_m = h3_MJ_m->ProjectionZ("h1_MJ_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ_m->Sumw2();
            h1_MJ_m->Scale(1., "width");
            TH1D* h1_MJ2 = h3_MJ2->ProjectionZ("h1_MJ2", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ2->Sumw2();
            h1_MJ2->Scale(1., "width");
            TH1D* h1_MJ2_m = h3_MJ2_m->ProjectionZ("h1_MJ2_m", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ2_m->Sumw2();
            h1_MJ2_m->Scale(1., "width");
            TH1D* h1_MJ2_um = h3_MJ2_um->ProjectionZ("h1_MJ2_um", pt1bin, pt2bin, pt1bin_tru, pt2bin_tru);
            h1_MJ2_um->Sumw2();
            h1_MJ2_um->Scale(1., "width");
            
            //Real contributions in data will only come from SB from real jets
            TH1D* h1_corrected = (TH1D*)h1_MJ_m->Clone("h1_corrected");
            h1_corrected->Add(h1_MJ0_um);
            h1_corrected->GetXaxis()->SetRangeUser(0.01,0.4);
            h1_corrected->Add(h1_MB1_corrected,-1);
            h1_corrected->Add(h1_JMB_corrected,-1);//MB1MB2 IS ALREADY SUBTRACTED FROM THIS
            
            //DRAW CORRECTED HISTOGRAM
            h1_corrected->Draw();
            h1_MJ2_m->SetLineColor(kBlack);
            h1_MJ2_m->Draw("HIST,SAME");
            
            if(ifDrawCfac){
                TH1D* histograms[] = {
                    //            h1_JMB, h1_JMB_m, h1_JMB_um
                    
                    h1_SMB_corr, h1_MB1MB2_corr_m,h1_MB1_corr_m,h1_MB1MB2_corr_um,h1_MB1_corr_um
                };
                
                // Define colors for better visualization
                int colors[] = {kRed, kBlue, kGreen+2, kMagenta, kCyan, kBlack};
                
                // Create a canvas
                TCanvas* c1 = new TCanvas("cCFAC", "Histogram Comparison", 800, 600);
                c1->cd();
                gPad->SetLogx();
                // Create a legend
                TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
                legend->SetBorderSize(0);
                
                // Loop through histograms, set styles, and draw them
                for (int i = 0; i < 5; i++) {
                    histograms[i]->SetLineColor(colors[i]);
                    histograms[i]->SetLineWidth(2);
                    histograms[i]->SetStats(0);
                    //            histograms[i]->SetMarkerStyle(markers[i]); // Set different marker styles
                    //            histograms[i]->SetMarkerColor(colors[i]); // Set different marker styles
                    histograms[i]->SetMarkerSize(0.8);
                    histograms[i]->SetTitle("");
                    histograms[i]->GetXaxis()->SetTitle(strR);
                    histograms[i]->GetYaxis()->SetTitle("EEC");
                    if (i == 0)
                        histograms[i]->Draw(""); // Draw first histogram
                    else
                        histograms[i]->Draw("SAME"); // Overlay the rest
                    
                    legend->AddEntry(histograms[i], histograms[i]->GetName(), "l");
                }
                legend->Draw("same");
                latex1.DrawLatex(0.15, 0.60, Form("%i < %s < %i GeV/#it{c} ",pt1 ,str5,pt2));
                latex2.DrawLatex(0.15, 0.65, Form("%i < %s < %i GeV/#it{c}", pt1_tru,str6,pt2_tru));
                // latex7.DrawLatex(0.15, 0.55, Form("%.1f < %s < %.1f", low_pt_tru,str8,high_pt_tru));
                
                latex3.DrawLatex(0.15,0.70 ,Form("%s > 1.0 GeV/#it{c}", str1));
                latex4.DrawLatex(0.15,0.75 ,Form("#it{R} = 0.4, %s < 0.5", str4));
                latex5.DrawLatex(0.15,0.80 ,Form("%s", str2));
                latex6.DrawLatex(0.15,0.85 ,Form("%s, ALICE PYTHIA+GEANT (pthat14)", str3));
            }
        }
        //        //############################################ 3D version #####################################################################
        //        //############################################ 3D version #####################################################################
        //        //############################################ 3D version #####################################################################
        //        //############################################ 3D version #####################################################################
        //
        if(if3D){
            
            //Files that you want to correct
            TH3D* h3_M_tot_corrected_3D = (TH3D*)file->Get("h3Jet_deltaR_MJ");
            h3_M_tot_corrected_3D->SetName("h3Jet_deltaR_M_base_corrected");
            h3_M_tot_corrected_3D->Reset();
            
            TH3D* h3_M_tot_corrected_3D_m = (TH3D*)file->Get("h3Jet_deltaR_MJ_m");
            h3_M_tot_corrected_3D_m->SetName("h3Jet_deltaR_M_base_corrected_m");
            
            TH3D* h3_M0_tot_corrected_3D = (TH3D*)file->Get("h3Jet_deltaR_MJ0");
            h3_M0_tot_corrected_3D->SetName("h3Jet_deltaR_MJ0_corrected");
            
            TH3D* h3_M0_tot_corrected_3D_um = (TH3D*)file->Get("h3Jet_deltaR_MJ0_um");
            h3_M0_tot_corrected_3D_um->SetName("h3Jet_deltaR_MJ0_corrected_um");
            
            TH3D* h3_M1_tot_corrected_3D =  (TH3D*)file->Get("h3Jet_deltaR_MJ1");
            h3_M1_tot_corrected_3D->SetName("h3Jet_deltaR_MJ1_base_corrected");
            
            TH3D* h3_M2_tot_corrected_3D = (TH3D*)file->Get("h3Jet_deltaR_MJ2");
            h3_M2_tot_corrected_3D->SetName("h3Jet_deltaR_MJ2_corrected");
            
            TH3D* h3_JMB_corrected_3D = (TH3D*)file->Get("h3Jet_deltaR_JMB");//jet(sig+bkg) * MB1
            h3_JMB_corrected_3D->SetName("h3Jet_deltaR_JMB_corrected");
            
            TH3D* h3_MB1_corrected_3D = (TH3D*)file->Get("h3Jet_deltaR_MB1");//jet(sig+bkg) * MB1
            h3_MB1_corrected_3D->SetName("h3Jet_deltaR_MB1_corrected");
            
            TH3D* h3_MB1MB2_corrected_3D = (TH3D*)file->Get("h3Jet_deltaR_MB1MB2");//jet(sig+bkg) * MB1
            h3_MB1MB2_corrected_3D->SetName("h3Jet_deltaR_MB1MB2_corrected");
            
             h3_M_tot_corrected_3D->Add(h3_M_tot_corrected_3D_m);
             h3_M_tot_corrected_3D->Add(h3_M0_tot_corrected_3D_um);
            // Files to find the correction factors with        //histograms with jetpT,RL, weight
            TH3D* h3_M_MJ_3D = (TH3D*)f3->Get("h3Jet_deltaR_MJ");
            TH3D* h3_M0_MJ_3D = (TH3D*)f3->Get("h3Jet_deltaR_MJ0");
            TH3D* h3_M1_MJ_3D =  (TH3D*)f3->Get("h3Jet_deltaR_MJ1_m");
            TH3D* h3_M2_MJ_3D = (TH3D*)f3->Get("h3Jet_deltaR_MJ2");
            
            TH3D* h3_M0_MJ_3D_m = (TH3D*)f3->Get("h3Jet_deltaR_MJ0_m");
            TH3D* h3_M0_MJ_3D_um = (TH3D*)f3->Get("h3Jet_deltaR_MJ0_um");
            
            TH3D* h3_JMB_3D = (TH3D*)f3->Get("h3Jet_deltaR_JMB_m");//jet(sig+bkg) * MB1
            
            TH3D* h3_SMB_3D = (TH3D*)f3->Get("h3Jet_deltaR_SMB_m");//jet(sig)*MB1
            
            TH3D* h3_MB1_3D = (TH3D*)f3->Get("h3Jet_deltaR_MB1");//same MB
            TH3D* h3_MB1_m_3D = (TH3D*)f3->Get("h3Jet_deltaR_MB1_m");//same MB matched jet
            TH3D* h3_MB1_um_3D = (TH3D*)f3->Get("h3Jet_deltaR_MB1_um");//same MB unmatched jet
            
            TH3D* h3_BMB_3D = (TH3D*)f3->Get("h3Jet_deltaR_BMB");//jet(bkg)*MB
            TH3D* h3_BMB_m_3D = (TH3D*)f3->Get("h3Jet_deltaR_BMB_m");//jet(bkg)*MB matched jet
            TH3D* h3_BMB_um_3D = (TH3D*)f3->Get("h3Jet_deltaR_BMB_um");//jet(bkg)*MB unmatched jet
            
            TH3D* h3_MB1MB2_3D = (TH3D*)f3->Get("h3Jet_deltaR_MB1MB2");
            TH3D* h3_MB1MB2_m_3D = (TH3D*)f3->Get("h3Jet_deltaR_MB1MB2_m");
            TH3D* h3_MB1MB2_um_3D = (TH3D*)f3->Get("h3Jet_deltaR_MB1MB2_um");
            
            h3_JMB_3D->Add(h3_BMB_um_3D);
            
            TCanvas* cj3d = new TCanvas("CorrectedJet3D","Corrected jet 3D projected", 800,650);
            gPad->SetLogx();
            
            TH3D* h3_M_tot_corrected_clone_3D = (TH3D*) h3_M_tot_corrected_3D->Clone("h3_M_tot_corrected_clone_3D");
            TH3D* h3_JMB_3D_clone = (TH3D*) h3_JMB_3D->Clone("h3_JMB_clone_3D");
            
            if(tag=="cFactor"){
                cout<<"######### Initiating c-factor correction#############"<<endl;
                
                
                TCanvas* cRatio = new TCanvas("cRatio3D","Ratio of M0_perp/M0 and M1_perp/M1",800,650);
                gPad->SetLogy();
                
                //BkgBkg
                TH3D* h3_MB1_matched_3D = (TH3D*)h3_MB1_3D->Clone("h3_MB1_corr_matched");
                TH3D* h3_MB1_unmatched_3D = (TH3D*)h3_MB1_3D->Clone("h3_MB1_corr_unmatched");
                TH3D* cfac_h3_MB1_m = (TH3D*)h3_MB1_3D->Clone("cfac_h3_MB1_m");
                TH3D* cfac_h3_MB1_um = (TH3D*)h3_MB1_3D->Clone("cfac_h3_MB1_um");
                
                cfac_h3_MB1_m->Divide(h3_M0_MJ_3D_m);//Correct total to match the the matched contribution
                h3_MB1_matched_3D->Divide(cfac_h3_MB1_m);
                
                cfac_h3_MB1_um->Divide(h3_M0_MJ_3D_um);//Correct total to match the the unmatched contribution
                h3_MB1_unmatched_3D->Divide(cfac_h3_MB1_um);
                
                TH3D* h3_MB1_corrected_3D_samefile = (TH3D*)h3_MB1_matched_3D->Clone("h3_MB1_corrected_3D");//add matched and unmatched contributions together
                h3_MB1_corrected_3D_samefile->Add(h3_MB1_unmatched_3D);
                
                h3_MB1_corrected_3D_samefile->GetXaxis()->SetRangeUser(0.01,0.4);
                h3_MB1_corrected_3D_samefile->GetYaxis()->SetRangeUser(0.,2.0);
                h3_MB1_corrected_3D_samefile->GetYaxis()->SetTickSize(0.04);
                h3_MB1_corrected_3D_samefile->GetXaxis()->SetTickSize(0.04);
                h3_MB1_corrected_3D_samefile->GetYaxis()->SetTitle("c-factor");
                
                h3_MB1_corrected_3D_samefile->Divide(h3_M0_MJ_3D);
                h3_MB1_corrected_3D_samefile->Draw();
                
                TH3D* h3_sub = (TH3D*)h3_MB1_corrected_3D_samefile->Clone("h3_corr");
                h3_sub->Sumw2();
                h3_sub->GetXaxis()->SetRange(pt1bin,pt2bin);
                TH2D *h2_sub = (TH2D*)h3_sub->Project3D("zy"); //Rl vs wt histogram
                TH1D *h1_sub = (TH1D*)h2_sub->ProjectionX("h1_sub");
                h1_sub->Reset();
                FillWeightedSum(h2_sub, h1_sub);
                h1sub->Draw();
//                //
//                //                //Bkg1Bkg2
//                TH3D* h3_MB1MB2_matched_3D =(TH3D*)h3_MB1MB2_3D->Clone("h3_MB1MB2_matched");//correct the matched contribution
//                TH3D* h3_MB1MB2_unmatched_3D =(TH3D*)h3_MB1MB2_3D->Clone("h3_MB1MB2_unmatched");//correct the matched contribution
//                TH3D* cfac_h3_MB1MB2_m = (TH3D*)h3_MB1MB2_3D->Clone("cfac_h3_MB1MB2_m");
//                TH3D* cfac_h3_MB1MB2_um = (TH3D*)h3_MB1MB2_3D->Clone("cfac_h3_MB1MB2_um");
//                
//                cfac_h3_MB1MB2_m->Divide(h3_BMB_m_3D);//Correct total to match the the matched contribution
//                h3_MB1MB2_matched_3D->Divide(cfac_h3_MB1MB2_m);
//                
//                cfac_h3_MB1MB2_um->Divide(h3_BMB_um_3D);//Correct the total to match unmatched contribution
//                h3_MB1MB2_unmatched_3D->Divide(cfac_h3_MB1MB2_um);
//                
//                TH3D* h3_MB1MB2_corrected_3D_samefile =(TH3D*)h3_MB1MB2_matched_3D->Clone("h3_MB1MB2_corrected_3D");//add corrected matched and unmatched contributions
//                h3_MB1MB2_corrected_3D_samefile->Add(h3_MB1MB2_unmatched_3D);
//                
//                TH3D* rat_MB1MB2_BMB = (TH3D*)h3_MB1MB2_corrected_3D_samefile->Clone("rat_MB1MB2_BMB");
//                rat_MB1MB2_BMB->Divide(h3_BMB_3D);
//                
//                //JetMB to correct SB contribution
////                TH3D* cfac_h3_JMB = (TH3D*)h3_JMB_3D->Clone("cfac_h3_JMB");
//                TH3D* cfac_h3_JMB = (TH3D*)h3_JMB_3D->Clone("cfac_h3_JMB");
//                TH3D* h3_JMB_corrected_3D_samefile = (TH3D*)h3_JMB_3D->Clone("h1_JMB_corrected");
//                cfac_h3_JMB->Add(h3_MB1MB2_corrected_3D_samefile,-1);
//                cfac_h3_JMB->Divide(h3_M1_MJ_3D);
//                
//                h3_JMB_corrected_3D_samefile->Add(h3_MB1MB2_corrected_3D_samefile,-1);
//                h3_JMB_corrected_3D_samefile->Divide(cfac_h3_JMB);
//                
//                TH3D* rat_JMB_SB = (TH3D*)h3_JMB_corrected_3D_samefile->Clone("rat_JMB_SB");
//                rat_JMB_SB->Divide(h3_M1_MJ_3D);
//                
//                
//                //Now correct the files with the c-factor from a different file
//                TH3D* h3_MB1_corrected_w_cfac = (TH3D*)h3_MB1_corrected_3D->Clone("h3_MB1_corrected_w_cfac");
//                h3_MB1_corrected_w_cfac->Reset();
//                TH3D* h3_MB1_corrected_3D_matched = (TH3D*)h3_MB1_corrected_3D->Clone("h3_MB1_corrected_3D_matched");
//                h3_MB1_corrected_3D_matched->Divide(cfac_h3_MB1_m);
//                TH3D* h3_MB1_corrected_3D_unmatched = (TH3D*)h3_MB1_corrected_3D->Clone("h3_MB1_corrected_3D_unmatched");
//                h3_MB1_corrected_3D_unmatched->Divide(cfac_h3_MB1_um);
//                h3_MB1_corrected_w_cfac->Add(h3_MB1_corrected_3D_unmatched);
//                h3_MB1_corrected_w_cfac->Add(h3_MB1_corrected_3D_matched);
//                
//                
//                TH3D* h3_MB1MB2_corrected_w_cfac = (TH3D*)h3_MB1MB2_corrected_3D->Clone("h3_MB1MB2_corrected_w_cfac");
//                h3_MB1MB2_corrected_w_cfac->Reset();
//                TH3D* h3_MB1MB2_corrected_3D_matched =(TH3D*) h3_MB1MB2_corrected_3D->Clone("h3_MB1MB2_corrected_3D_matched");
//                h3_MB1MB2_corrected_3D_matched->Divide(cfac_h3_MB1MB2_m);
//                TH3D* h3_MB1MB2_corrected_3D_unmatched = (TH3D*)h3_MB1MB2_corrected_3D->Clone("h3_MB1MB2_corrected_3D_unmatched");
//                h3_MB1MB2_corrected_3D_unmatched->Divide(cfac_h3_MB1MB2_um);
//                h3_MB1MB2_corrected_w_cfac->Add(h3_MB1MB2_corrected_3D_unmatched);
//                h3_MB1MB2_corrected_w_cfac->Add(h3_MB1MB2_corrected_3D_matched);
//                
//                TH3D* h3_JMB_corrected_w_cfac = (TH3D*)h3_JMB_corrected_3D->Clone("h3_JMB_corrected_w_cfac");
//                h3_JMB_corrected_w_cfac->Add(h3_MB1MB2_corrected_w_cfac,-1);
//                h3_JMB_corrected_w_cfac->Divide(cfac_h3_JMB);
//                
//                
//                TH3D* h3_sub = (TH3D*)h3_M_tot_corrected_3D->Clone("h3_sub");
//                h3_sub->Add(h3_JMB_corrected_w_cfac,-1);
//                h3_sub->Add(h3_MB1_corrected_w_cfac,-1);
//                h3_sub->Sumw2();
//                h3_sub->GetXaxis()->SetRange(pt1bin,pt2bin);
//                TH2D *h2_sub = (TH2D*)h3_sub->Project3D("zy"); //Rl vs wt histogram
//                TH1D *h1_sub = (TH1D*)h2_sub->ProjectionX("h1_sub");
//                h1_sub->Reset();
//                
//                TH3D* h3 = (TH3D*)h3_M2_tot_corrected_3D->Clone("h3_M2");
//                h3->Sumw2();
//                h3->GetXaxis()->SetRange(pt1bin,pt2bin);
//                TH2D *h2 = (TH2D*)h3->Project3D("zy"); //Rl vs wt histogra
//                TH1D *h1 = (TH1D*)h2->ProjectionX("h1");
//                h1->Sumw2();
//                h1->Reset();
//                
//                FillWeightedSum(h2, h1);
//                FillWeightedSum(h2_sub, h1_sub);
//                
//                h1->SetLineColor(kRed);
//                
//                TCanvas* cj1D = new TCanvas("CorrectedJet3DProjection","Corrected jet 3D projected", 800,650);
//                gPad->SetLogx();
//                h1_sub->SetMarkerStyle(29);
//                h1_sub->SetMarkerColor(kAzure+6);
//                h1_sub->SetLineColor(kAzure+6);
//                h1_sub->Draw();
//                h1->SetMarkerStyle(20);
//                h1->SetMarkerColor(kRed);
//                h1->SetMarkerSize(0.2);
//                h1->Draw("same");
//                
//                
//                TH1D* h1_sub_clone = (TH1D*)h1_sub->Clone("h1_sub_clone");
//                h1_sub_clone->Divide(h1);
//                h1_sub_clone->Draw();
                
                
            }
            //
            //
            //
            //
        }
        
    }//Correct histograms
    //     Close the file
    //    file->Close();
}

