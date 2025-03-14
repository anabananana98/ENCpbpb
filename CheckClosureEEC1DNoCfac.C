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


void CheckClosureEEC1DNoCfac() {
    std::string filename = "~/Desktop/pbpbAnalysis5Tev/EmbeddingOutEEC.root";
    std::string filename_cfac = "~/Desktop/pbpbAnalysis5Tev/cfactorEEC.root";
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
    int pt1 = 70;
    int pt2 = 90;
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
    bool if1D = true;
    bool if3D = false;
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
    
    
    //get c-factor histograms
    TH1D* c_fac_mb1mb2_m = (TH1D*)f3->Get(Form("c_fac_mb1mb2_m_%i_%i",pt1,pt2));
    TH1D* c_fac_mb1mb2_um = (TH1D*)f3->Get(Form("c_fac_mb1mb2_um_%i_%i",pt1,pt2));
    TH1D* c_fac_mb1_m = (TH1D*)f3->Get(Form("c_fac_mb1_m_%i_%i",pt1,pt2));
    TH1D* c_fac_mb1_um = (TH1D*)f3->Get(Form("c_fac_mb1_um_%i_%i",pt1,pt2));
    TH1D* c_fac_smb = (TH1D*)f3->Get(Form("c_fac_smb_%i_%i",pt1,pt2));
    
    
    
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
            TH1D* h1_MB1MB2_matched_split =(TH1D*)h1_MB1MB2->Clone("h1_MB1MB2_matched_split");//correct the matched contribution
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
            
            
            //
            TCanvas* c2 = new TCanvas("c2", "Histogram Comparison", 800, 600);
            c2->cd();
            gPad->SetLogx();
            
            //correct by cfac
            //            h1_MB1MB2_matched->Divide(h1_MB1MB2_corr_m);
            //            h1_MB1MB2_matched_split->Divide(c_fac_mb1mb2_m);
            //correct by cfac
            //            h1_MB1MB2_unmatched->Divide(h1_MB1MB2_corr_um);
            //        h1_MB1MB2_unmatched->Draw("same");
            //        h1_BMB_um->Draw("same,HIST");
            TH1D* h1_MB1MB2_corrected =(TH1D*)h1_MB1MB2_matched->Clone("h1_MB1MB2_corrected");//add corrected matched and unmatched contributions
            h1_MB1MB2_corrected->Add(h1_MB1MB2_unmatched);
            
            /// h1_MB1MB2_unmatched = h1_BMB_um ---and--- h1_MB1MB2_matched = h1_BMB_m ---and--- h1_BMB_m+h1_BMB_um = h1_BMB --then-- h1_MB1MB2_matched+h1_MB1MB2_unmatched =h1_BMB
            //DRAW CORRECTED HISTOGRAMS
            h1_MB1MB2_corrected->Draw();
            h1_BMB->SetLineColor(kRed);
            h1_BMB->Draw("same,HIST");
            //
            //            ////############################//#################################//#################################
            //
            //            //        //    //Correct histograms PP
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
            
            //divide by cfac
            //            h1_MB1_matched->Divide(h1_MB1_corr_m);
            //            h1_MB1_matched->SetLineColor(kGreen);
            //            h1_MB1_matched->Draw();
            //            //        h1_MB1_matched->Draw();
            //            //        h1_MJ0_m->Draw("same");
            //
            //            h1_MB1_unmatched->Divide(h1_MB1_corr_um);
            //            h1_MB1_unmatched->Draw();
            //            //        h1_MB1_unmatched->Draw("same");
            //            //        h1_MJ0_um->Draw("same,HIST");
            //
            TH1D* h1_MB1_corrected =(TH1D*)h1_MB1_matched->Clone("h1_MB1_corrected");//add corrected matched and unmatched contributions
            h1_MB1_corrected->Add(h1_MB1_unmatched);
            //
            //            //        //DRAW CORRECTED HISTOGRAMS
            //            h1_MB1_corrected->Draw();
            //            h1_MJ0->SetLineColor(kRed);
            //            h1_MJ0->Draw("same,HIST");
            //            //
            //            //
            //
            //            ////############################//#################################//#################################
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
            
            h1_JMB_corrected->SetLineColor(kBlue);
            h1_JMB_corrected->Draw();
            h1_MJ1_m->SetLineColor(kRed);
            //        h1_MJ1_m->Draw("same");
            
            //divide by cfac
            //            h1_JMB_corrected->Divide(h1_SMB_corr);
            
            h1_JMB_corrected->Draw();
            //            TH3D* h3_MJ = (TH3D*)file->Get("h_MJ");
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
            
            // Create a canvas
            TCanvas *c1 = new TCanvas("c1", "Overlay Histograms", 600, 800);
            // Create the top and bottom pads
            TPad *topPad = new TPad("topPad", "Top Pad", 0, 0.3, 1, 1.0);
            TPad *bottomPad = new TPad("bottomPad", "Bottom Pad", 0, 0, 1, 0.3);
            
            // Adjust margins for the pads
            topPad->SetBottomMargin(0); // Remove the bottom margin for the top pad
            bottomPad->SetTopMargin(0); // Remove the top margin for the bottom pad
            bottomPad->SetBottomMargin(0.3); // Increase the bottom margin of the bottom pad for axis labels
            
            // Draw the pads on the canvas
            topPad->Draw();
            bottomPad->Draw();
            
            topPad->cd();
            gPad->SetLogx();
            //DRAW CORRECTED HISTOGRAM
            h1_corrected->Draw();
            h1_MJ2_m->SetLineColor(kBlack);
            h1_MJ2_m->Draw("HIST,SAME");
            
            h1_corrected->SetTitle("");
            h1_corrected->SetStats(0);
            h1_corrected->GetXaxis()->SetTitle(strR);
            h1_corrected->GetYaxis()->SetTitle("EEC");
            h1_corrected->SetLineColor(kRed);
            h1_corrected->SetLineWidth(2);
            h1_corrected->SetMarkerStyle(29); // Set
            h1_corrected->SetMarkerColor(kRed); // Set
            
            TLegend *legend = new TLegend(0.7, 0.7, 0.88, 0.88);
            legend->SetBorderSize(0);
            legend->SetTextFont(42);
            legend->SetTextSize(0.04);
            legend->AddEntry(h1_corrected, "Corrected w/o c-factor","l");
            legend->AddEntry(h1_MJ2_m, "ss","l");
            legend->Draw("same");
            latex1.DrawLatex(0.15, 0.60, Form("%i < %s < %i GeV/#it{c} ",pt1 ,str5,pt2));
            latex2.DrawLatex(0.15, 0.65, Form("%i < %s < %i GeV/#it{c}", pt1_tru,str6,pt2_tru));
            // latex7.DrawLatex(0.15, 0.55, Form("%.1f < %s < %.1f", low_pt_tru,str8,high_pt_tru));
            
            latex3.DrawLatex(0.15,0.70 ,Form("%s > 1.0 GeV/#it{c}", str1));
            latex4.DrawLatex(0.15,0.75 ,Form("#it{R} = 0.4, %s < 0.5", str4));
            latex5.DrawLatex(0.15,0.80 ,Form("%s", str2));
            latex6.DrawLatex(0.15,0.85 ,Form("%s, ALICE PYTHIA+GEANT (pthat14)", str3));
            
            bottomPad->cd();
            gPad->SetLogx();
            TH1D* h1_corrected_ratio = (TH1D*)h1_corrected->Clone("h1_corrected_ratio");
            h1_corrected_ratio->Divide(h1_MJ2_m);
            h1_corrected_ratio->GetYaxis()->SetTitle("Corrected/Signal");
            h1_corrected_ratio->GetXaxis()->SetLabelSize(0.1); // Increase X-axis label size
            h1_corrected_ratio->GetYaxis()->SetLabelSize(0.08); // Increase Y-axis label size (modify with actual histograms)
            h1_corrected_ratio->GetXaxis()->SetTitleOffset(1.3);
            h1_corrected_ratio->GetYaxis()->SetTitleOffset(0.5);
            h1_corrected_ratio->GetXaxis()->SetTitleSize(0.1);
            h1_corrected_ratio->GetYaxis()->SetTitleSize(0.08);
            h1_corrected_ratio->Draw();
            
        }
    }
    
}
