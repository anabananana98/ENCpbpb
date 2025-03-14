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

void ProcessFile(const char* filename, const std::string& originalHistNameTru, const std::string& originalHistNameUnf, const char* canvasName) {
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

    TH3* hist3DUnf = (TH3*)file->Get(originalHistNameUnf.c_str());
    hist3DUnf->GetYaxis()->SetRange(hist3DUnf->GetXaxis()->FindBin(pt1), hist3DUnf->GetXaxis()->FindBin(pt2));
    TH2D* h2DUnf = (TH2D*)hist3DUnf->Project3D("zy");
    TH1D* h1Unf = (TH1D*)h2DUnf->ProjectionX("h1Unf");
    h1Unf->Reset();
    FillWeightedSum(h2DUnf, h1Unf);
    h1Unf->Scale(1., "width");
    h1Unf->SetLineColor(kBlue);
    h1Unf->SetMarkerStyle(21);
    h1Unf->SetMarkerColor(kBlue);

    TH1D* hRatio = (TH1D*)h1Unf->Clone("hRatio");
    hRatio->Divide(h1);
    hRatio->SetLineColor(kBlack);
    hRatio->SetMarkerStyle(24);
    hRatio->SetMarkerColor(kBlack);
    hRatio->GetYaxis()->SetTitle("Ratio");

    TCanvas* c = new TCanvas(canvasName, canvasName, 800, 800);
    c->Divide(1, 2);
    gPad->SetLogx();
    TPad* topPad = (TPad*)c->cd(1);
    topPad->SetPad(0, 0.3, 1, 1);
    topPad->SetBottomMargin(0.02);
    h1->SetTitle("");
    h1->SetStats(0);
    h1->GetYaxis()->SetTitle("EEC");
    h1->GetYaxis()->SetTitleSize(0.04);
    h1->GetXaxis()->SetRangeUser(0.01,0.4);
    h1Unf->GetXaxis()->SetRangeUser(0.01,0.4);
//    h1->Draw("PE");
    h1Unf->Draw("PE SAME");

    TLegend* legend = new TLegend(0.7, 0.7, 0.88, 0.88);
    legend->SetBorderSize(0);
    legend->SetTextFont(42);
    legend->SetTextSize(0.045);
    legend->AddEntry(h1, "Unbinned Weight", "PE");
    legend->AddEntry(h1Unf, "Binned Weight", "PE");
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

void DrawData() {
    const char* filenames[2] = {
//    "~/Downloads/E3C_dataExcludeJetsWithLessConstituents.root",
        "~/Desktop/pbpbAnalysis5Tev/Data18q.root",
//        "~/Downloads/E3C_data5TevWtRBinnedMar2.root",
        "~/Desktop/pbpbAnalysis5Tev/Data18q.root"
    };

    std::string histNamesUnf[2] = {"Opt_Un_e3c", "Opt_Un_eec"};
    std::string histNamesTru[3] = {"E3C_pt_hist", "EEC_pt_hist", "jet_pt_hist"};

//    ProcessFile(filenames[0], histNamesTru[0], histNamesUnf[0], "Canvas_E3C");
    ProcessFile(filenames[1], histNamesTru[1], histNamesUnf[1], "Canvas_EEC");
    
    
    
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
    
    
     
   
    

