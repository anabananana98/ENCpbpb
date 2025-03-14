#include "TFile.h"
#include "TList.h"
#include "TH1.h"
#include "TKey.h"
#include "TIterator.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iterator>
#include "TCanvas.h"
#include "THStack.h"
#include "TStyle.h"
#include "TPaveLabel.h"
#include "TColor.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TFile.h"
#include "TMath.h"
#include "TTree.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TPad.h"

void FillWeightedSum(TH2* h2, TH1* h1) {
    if (!h2 || !h1) {
        std::cerr << "Error: Null histogram pointer provided!" << std::endl;
        return;
    }
    
    int nBinsX = h2->GetNbinsX();
    for (int i = 1; i <= nBinsX; ++i) {
        double weightedSum = 0;
        double weightedErrorSquared = 0;
        for (int j = 1; j <= h2->GetNbinsY(); ++j) {
            double binContent = h2->GetBinContent(i, j);
            double binCenterY = h2->GetYaxis()->GetBinCenter(j);
            double binError = h2->GetBinError(i, j);
            
            double weight = binCenterY;
            weightedSum += binContent * weight;
            weightedErrorSquared += (binError * binError * weight * weight);
        }
        double weightedError = std::sqrt(weightedErrorSquared);
        h1->SetBinContent(i, weightedSum);
        h1->SetBinError(i, weightedError);
    }
}

void ProcessFile(const char* filename, const std::string& originalHistNameTru,const std::string& originalHistNameTru1,const std::string& originalHistNameTru2, const std::string& originalHistNameTru3, const std::string& originalHistNameUnf, const std::string& originalHistNameUnf1, const std::string& originalHistNameUnf2, const std::string& originalHistNameUnf3, const char* canvasName) {
    int pt1 = 70;
    int pt2 = 90 - 1;
    
    const char *str2 = "anti-#it{k}_{T}";
    const char *str4 = "#it{R}_{L}";
    const char *str8 = "#it{#eta}_{jet}";
    const char *str11 = "#it{p}_{T}^{const}";
    const char *str = "#it{p}^{ch}_{T,jet}";
    const char *str3 = "#sqrt{s} = 5.02 TeV";
    const char *str1 = "#it{p}^{ch}_{T,min}";
    
    TFile* file = TFile::Open(filename);
    if (!file || file->IsZombie()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    TH2* h2 = (TH2*)file->Get(originalHistNameTru.c_str());
    TH1D* h1 = h2->ProjectionX("h1", h2->GetYaxis()->FindBin(pt1), h2->GetYaxis()->FindBin(pt2));
    h1->Scale(1., "width");
    h1->SetLineColor(kRed);
    h1->SetMarkerStyle(20);
    h1->SetMarkerColor(kRed);
    
    TH2* h2_mb1 = (TH2*)file->Get(originalHistNameTru1.c_str());
    TH1D* h1_mb1 = h2->ProjectionX("h1_mb1", h2->GetYaxis()->FindBin(pt1), h2->GetYaxis()->FindBin(pt2));
    h1_mb1->Scale(1., "width");
    h1_mb1->SetLineColor(kRed);
    h1_mb1->SetMarkerStyle(20);
    h1_mb1->SetMarkerColor(kRed);
    
    TH2* h2_jmb = (TH2*)file->Get(originalHistNameTru3.c_str());
    TH1D* h1_jmb = h2->ProjectionX("h1_jmb", h2->GetYaxis()->FindBin(pt1), h2->GetYaxis()->FindBin(pt2));
    h1_jmb->Scale(1., "width");
    h1_jmb->SetLineColor(kRed);
    h1_jmb->SetMarkerStyle(20);
    h1_jmb->SetMarkerColor(kRed);
    
    TH2* h2_mb1mb2 = (TH2*)file->Get(originalHistNameTru3.c_str());
    TH1D* h1_mb1mb2 = h2->ProjectionX("h1_mb1mb2", h2->GetYaxis()->FindBin(pt1), h2->GetYaxis()->FindBin(pt2));
    h1_mb1mb2->Scale(1., "width");
    h1_mb1mb2->SetLineColor(kRed);
    h1_mb1mb2->SetMarkerStyle(20);
    h1_mb1mb2->SetMarkerColor(kRed);
    
    h1->Add(h1_mb1,-1);
//    h1_jmb->Add(h1_mb1mb2,-1);
    h1->Add(h1_jmb,-1);
    

    TH3* hist3DUnf = (TH3*)file->Get(originalHistNameUnf.c_str());
    hist3DUnf->SetName("hist3DUnf");
    TH3* hist3DUnf_clone = (TH3*)file->Get(originalHistNameUnf.c_str());
    hist3DUnf_clone->SetName("hist3DUnf_clone");
    
    TH3* hist3DUnf_clone_wrong = (TH3*)file->Get(originalHistNameUnf.c_str());
    hist3DUnf_clone_wrong->SetName("hist3DUnf_clone_wrong");
    
    TH3* hist3DUnf_mb1 = (TH3*)file->Get(originalHistNameUnf1.c_str());
//    hist3DUn_mb1->GetYaxis()->SetRange(hist3DUnf->GetXaxis()->FindBin(pt1), hist3DUnf->GetXaxis()->FindBin(pt2));
//    TH2D* h2DUnf_mb1 = (TH2D*)hist3DUnf->Project3D("zy");
//    TH1D* h1Unf_mb1 = (TH1D*)h2DUnf->ProjectionX("h1Unf_mb1");
//    h1Unf_mb1->Reset();
//    FillWeightedSum(h2DUnf_mb1, h1Unf_mb1);
//    h1Unf_mb1->Scale(1., "width");
//    h1Unf_mb1->SetLineColor(kBlue);
//    h1Unf_mb1->SetMarkerStyle(21);
//    h1Unf_mb1->SetMarkerColor(kBlue);
//    
    TH3* hist3DUnf_jmb = (TH3*)file->Get(originalHistNameUnf2.c_str());
//    hist3DUn_jmb->GetYaxis()->SetRange(hist3DUnf->GetXaxis()->FindBin(pt1), hist3DUnf->GetXaxis()->FindBin(pt2));
//    TH2D* h2DUnf_jmb = (TH2D*)hist3DUnf->Project3D("zy");
//    TH1D* h1Unf_jmb = (TH1D*)h2DUnf->ProjectionX("h1Unf_jmb");
//    h1Unf_jmb->Reset();
//    FillWeightedSum(h2DUnf_jmb, h1Unf_jmb);
//    h1Unf_jmb->Scale(1., "width");
//    h1Unf_jmb->SetLineColor(kBlue);
//    h1Unf_jmb->SetMarkerStyle(21);
//    h1Unf_jmb->SetMarkerColor(kBlue);
    
    TH3* hist3DUnf_mb1mb2 = (TH3*)file->Get(originalHistNameUnf3.c_str());
//    hist3DUn_mb1mb2->GetYaxis()->SetRange(hist3DUnf->GetXaxis()->FindBin(pt1), hist3DUnf->GetXaxis()->FindBin(pt2));
//    TH2D* h2DUnf_mb1mb2 = (TH2D*)hist3DUnf->Project3D("zy");
//    TH1D* h1Unf_mb1mb2 = (TH1D*)h2DUnf->ProjectionX("h1Unf_mb1mb2");
//    h1Unf_mb1mb2->Reset();
//    FillWeightedSum(h2DUnf_mb1mb2, h1Unf_mb1mb2);
//    h1Unf_mb1mb2->Scale(1., "width");
//    h1Unf_mb1mb2->SetLineColor(kBlue);
//    h1Unf_mb1mb2->SetMarkerStyle(21);
//    h1Unf_mb1mb2->SetMarkerColor(kBlue);
  
    hist3DUnf_jmb->Add(hist3DUnf_mb1mb2,-1);
    
    hist3DUnf->Add(hist3DUnf_mb1,-1);
    hist3DUnf->Add(hist3DUnf_jmb,-1);
    
    hist3DUnf_clone_wrong->Add(hist3DUnf_mb1,-1);
    hist3DUnf_clone_wrong->Add(hist3DUnf_jmb,-1);
    
    hist3DUnf->GetXaxis()->SetRange(hist3DUnf->GetXaxis()->FindBin(pt1), hist3DUnf->GetXaxis()->FindBin(pt2));
    TH2D* h2DUnf = (TH2D*)hist3DUnf->Project3D("zy");
    TH1D* h1Unf = (TH1D*)h2DUnf->ProjectionX("h1Unf");
    h1Unf->Reset();
    FillWeightedSum(h2DUnf, h1Unf);
    h1Unf->Scale(1., "width");
    h1Unf->SetLineColor(kBlue);
    h1Unf->SetMarkerStyle(21);
    h1Unf->SetMarkerColor(kBlue);
    
    hist3DUnf_clone->GetXaxis()->SetRange(hist3DUnf->GetXaxis()->FindBin(pt1), hist3DUnf->GetXaxis()->FindBin(pt2));
    TH2D* h2DUnf_clone = (TH2D*)hist3DUnf_clone->Project3D("zy");
    TH1D* h1Unf_clone = (TH1D*)h2DUnf_clone->ProjectionX("h1Unf_clone");
    h1Unf_clone->Reset();
    FillWeightedSum(h2DUnf_clone, h1Unf_clone);
    h1Unf_clone->Scale(1., "width");
    h1Unf_clone->SetLineColor(kRed);
    h1Unf_clone->SetMarkerStyle(21);
    h1Unf_clone->SetMarkerColor(kRed);
    
    hist3DUnf_clone_wrong->GetXaxis()->SetRange(hist3DUnf->GetXaxis()->FindBin(pt1), hist3DUnf->GetXaxis()->FindBin(pt2));
    TH2D* h2DUnf_clone_wrong = (TH2D*)hist3DUnf_clone_wrong->Project3D("zy");
    TH1D* h1Unf_clone_wrong = (TH1D*)h2DUnf_clone->ProjectionX("h1Unf_clone_wrong");
    h1Unf_clone_wrong->Reset();
    FillWeightedSum(h2DUnf_clone_wrong, h1Unf_clone_wrong);
    h1Unf_clone_wrong->Scale(1., "width");
    h1Unf_clone_wrong->SetLineColor(kGreen+2);
    h1Unf_clone_wrong->SetMarkerStyle(21);
    h1Unf_clone_wrong->SetMarkerColor(kGreen+2);
  
    
//    TH1D* hRatio = (TH1D*)h1Unf->Clone("hRatio");
//    hRatio->Divide(h1);
//    hRatio->SetLineColor(kBlack);
//    hRatio->SetMarkerStyle(24);
//    hRatio->SetMarkerColor(kBlack);
//    hRatio->GetYaxis()->SetTitle("Ratio");

    TCanvas* c = new TCanvas(canvasName, canvasName, 800, 650);
//    c->Divide(1, 2);
    gPad->SetLogx();
//    TPad* topPad = (TPad*)c->cd(1);
//    topPad->SetPad(0, 0.3, 1, 1);
//    topPad->SetBottomMargin(0.02);
    h1Unf->SetTitle("");
    h1Unf->SetStats(0);
    h1Unf->GetYaxis()->SetTitle("EEC");
    h1Unf->GetXaxis()->SetTitle("#it{R}_{L}");
    h1Unf->GetYaxis()->SetTitleSize(0.04);
    h1Unf->GetXaxis()->SetRangeUser(0.01,0.4);
    h1Unf_clone->GetXaxis()->SetRangeUser(0.01,0.4);
//    h1->Draw("PE");
    h1Unf->Draw("PE SAME");
    h1Unf_clone->Draw("PE SAME");
//    h1Unf_clone_wrong->Draw("PE SAME");
//    h1Unf_clone->Divide(h1Unf_clone_wrong);
//    h1Unf_clone->Draw();
    

    TLegend* legend = new TLegend(0.7, 0.7, 0.88, 0.88);
    legend->SetBorderSize(0);
    legend->SetTextFont(42);
    legend->SetTextSize(0.03);
    legend->AddEntry(h1Unf, "Bkg Sub (no c-factor)", "PE");
    legend->AddEntry(h1Unf_clone, "Nominal", "PE");
    legend->Draw();

    TLatex latex;
    latex.SetNDC();
    latex.SetTextSize(0.045);
    latex.SetTextFont(42);
     
     latex.DrawLatex(0.15, 0.85, Form("#sqrt{#it{s_{NN}}} = 5.02 TeV, %.1d < %s < %.1d GeV/#it{c}", pt1,str , pt2+1));
     latex.DrawLatex(0.15, 0.79, Form("%s ch-particle jets, #it{R} = 0.4",str2));
     latex.DrawLatex(0.15, 0.73, Form("%s > 1 GeV/#it{c}, |#it{#eta}_{jet}| < 0.9",str1));
   
//    TPad* bottomPad = (TPad*)c->cd(2);
//    gPad->SetLogx();
//    bottomPad->SetPad(0, 0, 1, 0.3);
//    bottomPad->SetTopMargin(0.02);
//    bottomPad->SetBottomMargin(0.3);
//    hRatio->SetTitle("");
//    hRatio->SetStats(0);
//    hRatio->GetXaxis()->SetRangeUser(0.01,0.4);
//    hRatio->GetYaxis()->SetLabelSize(0.08);
//    hRatio->GetXaxis()->SetTitleSize(0.04);
//    hRatio->GetXaxis()->SetLabelSize(0.08);
//    hRatio->GetXaxis()->SetTitle("#it{R}_{L}");
//    hRatio->Draw("PE");
//    
//    TFile* fileOut = new TFile("ProjOutputEEC_Unbinned.root","RECREATE");
//    fileOut->cd();
//    h1->Write("EEC_unbinned_70_120");

//    c->SaveAs(Form("%s.png", canvasName));
}

void DataSubNoCfactor() {
    const char* filenames[2] = {
//    "~/Downloads/E3C_dataExcludeJetsWithLessConstituents.root",
        "~/Desktop/pbpbAnalysis5Tev/DataPbPbMar14.root",
//        "~/Downloads/E3C_data5TevWtRBinnedMar2.root",
        "~/Desktop/pbpbAnalysis5Tev/DataPbPbMar14.root"
    };
bool eec = true;
if(eec){
    std::string histNamesUnf[4] = {"Opt_Un_eec","h3Jet_deltaR_MB1_dat","h3Jet_deltaR_JMB_dat","h3Jet_deltaR_MB1MB2_dat"};
    std::string histNamesTru[4] = {"EEC_pt_hist", "h_MB1_dat","h_JMB_dat","h_MB1MB2_dat"};
    ProcessFile(filenames[1], histNamesTru[0], histNamesTru[1], histNamesTru[2], histNamesTru[3], histNamesUnf[0], histNamesUnf[1],histNamesUnf[2],histNamesUnf[3],"Canvas_EEC");
}else{
    std::string histNamesUnf[4] = {"Opt_Un_eec","h3_MB1_dat","h3_JMB_dat","h3_MB1MB2_dat"};
    std::string histNamesTru[4] = {"EEC_pt_hist", "h_MB1_dat","h_JMB_dat","h_MB1MB2_dat"};
}
//    ProcessFile(filenames[0], histNamesTru[0], histNamesUnf[0], "Canvas_E3C");
//    ProcessFile(filenames[1], histNamesTru[1], histNamesUnf[1], "Canvas_EEC");
                            

    
    
}




//#include "TFile.h"
//#include "TList.h"
//#include "TH1.h"
//#include "TKey.h"
//#include "TIterator.h"
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <numeric>
//#include <stdio.h>
//#include <math.h>
//#include <cstdlib>
//#include <iterator>
//#include "TCanvas.h"
//#include "THStack.h"
//#include "TStyle.h"
//#include "TPaveLabel.h"
//#include "TColor.h"
//#include "TH1.h"
//#include "TH2.h"
//#include "TH3.h"
//#include "TFile.h"
//#include "TMath.h"
//#include "TTree.h"
//
//
//
//void FillWeightedSum(TH2* h2, TH1* h1) {
//    if (!h2 || !h1) {
//        std::cerr << "Error: Null histogram pointer provided!" << std::endl;
//        return;
//    }
//    
//    int nBinsX = h2->GetNbinsX();
//    for (int i = 1; i <= nBinsX; ++i) {
//        int nBinsY = h2->GetNbinsY();
//        double weightedSum = 0;
//        double sumOfWeights = 0;
//        double weightedErrorSquared = 0; // To accumulate squared errors
//        for (int j = 1; j <= nBinsY; ++j) {
//            double binContent = h2->GetBinContent(i, j);
//            double binCenterY = h2->GetYaxis()->GetBinCenter(j); // Bin center in Y direction
//            double binError = h2->GetBinError(i, j);
//            // Compute weight as the bin center in Y direction
//            double weight = binCenterY;
//            
//            // Accumulate weighted sum and sum of weights
//            weightedSum += binContent * weight;
//            weightedErrorSquared += (binError*binError * weight*weight);
//        }
//        double weightedError = std::sqrt(weightedErrorSquared);
//        // Fill the 1D histogram bin
//        h1->SetBinContent(i, weightedSum); // Using the weighted sum directly
//        h1->SetBinError(i, weightedError);
//    }
//}

//void DrawData() {
//    bool ifeec = true;
//    int num=4;
//    int pt1 = 70;
//    int pt2 = 120-1;
//    double rlow = 0.01;
//    double rhigh = 0.4;
//    
//   
//

//    
//    
//    std::string encstr = "EEC";
//    if(!ifeec){
//        encstr = "E3C";
//    }
//    
//    TLatex latex;latex.SetNDC ();latex.SetTextSize(0.045);latex.SetTextFont(42);
//    TLatex latex1;latex1.SetNDC ();latex1.SetTextSize(0.045);latex1.SetTextFont(42);
//    TLatex latex2;latex2.SetNDC ();latex2.SetTextSize(0.045);latex2.SetTextFont(42);
//    TLatex latex3;latex3.SetNDC ();latex3.SetTextSize(0.045);latex3.SetTextFont(42);
//    TLatex latex4;latex4.SetNDC ();latex4.SetTextSize(0.045);latex4.SetTextFont(42);
//    TLatex latex5;latex5.SetNDC ();latex5.SetTextSize(0.045);latex5.SetTextFont(42);
//    
//    // Create a legend
//    TLegend *legend = new TLegend(0.7, 0.7, 0.88, 0.88);
//    legend->SetBorderSize(0);
//    legend->SetTextFont(42);
//    legend->SetTextSize(0.045);
//    
//    // Create a legend
//    TLegend *legend1 = new TLegend(0.7, 0.7, 0.88, 0.88);
//    legend1->SetBorderSize(0);
//    legend1->SetTextFont(42);
//    legend1->SetTextSize(0.045);
//    
//    TLegend *legend2 = new TLegend(0.7, 0.7, 0.88, 0.88);
//    legend2->SetBorderSize(0);
//    legend2->SetTextFont(42);
//    legend2->SetTextSize(0.045);
//    
//    
//    const char* filenames[2] = {
//        
////        "~/Downloads/EEC_data5TevWtRBinned.root",
//        "~/Desktop/pp5TEVAnalysis/E3C_data5TevWtRBinned.root",
//        "~/Desktop/pp5TEVAnalysis/EEC_data5TevWtRBinned.root",
////        "~/Downloads/EEC_dataFeb28.root",
//        
//    };
//    
//    
//    std::string originalHistNameUnf = "Opt_Un_e3c_unf";
//    std::string originalHistNameTru = "e3c_pt_hist_unf";
//    
//    std::string originalHistNameUnf1 = "Opt_Un_eec_unf";
//    std::string originalHistNameTru1 = "eec_pt_hist_unf";
//    
//    // Array of colors for histograms
//    Color_t colors[4] = {kRed, kBlue, kMagenta, kCyan};
//    
//    // Array of markers for histograms
//    Color_t markers[4] = {20, 21, 29, 33};
//    
//    // Create a canvas
//    TCanvas *c1 = new TCanvas("c2", "Overlay Histograms", 800, 600);
//    //    c1->SetGrid();
//    
//    TFile *file = TFile::Open(filenames[0]);
//    TFile *file1 = TFile::Open(filenames[1]);
//    
//    TH2 *h2 = (TH2*)file->Get(originalHistNameTru.c_str());
//     TH1D* h1 = h2->ProjectionX("h1",h2->GetYaxis()->FindBin(pt1),h2->GetYaxis()->FindBin(pt2));
//     h1->Scale(1.,"width");
//     h1->SetLineColor(kRed);
//     h1->Draw();
//     
//     TH2 *h2_eec = (TH2*)file1->Get(originalHistNameTru1.c_str());
//     TH1D* h1_eec = h2_eec->ProjectionX("h1_eec",h2_eec->GetYaxis()->FindBin(pt1),h2_eec->GetYaxis()->FindBin(pt2));
//     h1_eec->Scale(1.,"width");
//     h1_eec->SetLineColor(kRed);
//     h1_eec->Draw();
//     
//     h1_eec->SetStats(0);
//     h1_eec->SetTitle("");
//     h1_eec->SetMarkerStyle(20);
//     h1_eec->SetLineColor(kViolet+1);
//     h1_eec->SetMarkerColor(kViolet+1);
////     h1->Divide(h1_eec);
//     h1_eec->GetXaxis()->SetTitle(str4);
//     h1_eec->GetYaxis()->SetTitle("EEC");
//     h1_eec->Draw();
//    
//
//    TH3 *hist3DUnf = (TH3*)file->Get(originalHistNameUnf.c_str());
//    hist3DUnf->GetYaxis()->SetRange(hist3DUnf->GetYaxis()->FindBin(pt1),hist3DUnf->GetYaxis()->FindBin(pt2));
//    TH2D *h2DUnf = (TH2D*)hist3DUnf->Project3D("zx"); //Rl vs wt histogra
//    TH1D *h1Unf = (TH1D*)h2DUnf->ProjectionX(Form("h1Unf_i"));
//    h1Unf->Reset();
//    FillWeightedSum(h2DUnf, h1Unf);
//    h1Unf->Scale(1.,"width");
////    h1Unf->Draw("same");
//    
////    h1Unf->Divide(h1);
////    h1Unf->Draw();
//    
////    h2DUnf->Draw("text");
//   
//    
//}
    
    
     
   
    

