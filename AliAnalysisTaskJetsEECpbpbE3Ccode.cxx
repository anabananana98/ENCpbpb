
    if(fCout){cout<<"#######################!!!!!!!!!!!!!!!All declarations for EEC successful!!!!!!!!!!!!!####################"<<endl;}
    
    // /////////////////////////////////////////////////
    if(fCout) cout<<"subtraction histograms for E3C"<<endl;
//     /////FOR E3C MIN BIAS SUBTRCTION////////
     h_MJ_e3c = new TH3D("h_MJ_e3c", "h_MJ_e3c", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ_e3c);
     h_MJ0_e3c = new TH3D("h_MJ0_e3c", "h_MJ0_e3c", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ0_e3c);
     h_MJ1_e3c = new TH3D("h_MJ1_e3c", "h_MJ1_e3c",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ1_e3c);
     h_MJ2_e3c = new TH3D("h_MJ2_e3c", "h_MJ2_e3c",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ2_e3c);
     h_MJ3_e3c = new TH3D("h_MJ3_e3c", "h_MJ3_e3c", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ3_e3c);
     h_MJ_e3c_tru = new TH3D("h_MJ_e3c_tru", "h_MJ_e3c_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ_e3c_tru);
     h_MJ0_e3c_tru = new TH3D("h_MJ0_e3c_tru", "h_MJ0_e3c_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ0_e3c_tru);
     h_MJ1_e3c_tru = new TH3D("h_MJ1_e3c_tru", "h_MJ1_e3c_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ1_e3c_tru);
     h_MJ2_e3c_tru = new TH3D("h_MJ2_e3c_tru", "h_MJ2_e3c_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ2_e3c_tru);
     h_MJ3_e3c_tru = new TH3D("h_MJ3_e3c_tru", "h_MJ3_e3c_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MJ3_e3c_tru);

    if(fCout) cout<<"subtraction histograms for E3C 1"<<endl; 

     h_MB1MB1MB1 = new TH3D("h_MB1MB1MB1", "h_MB1MB1MB1",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB1MB1);
     h_MB1MB1MB1_dat = new TH2D("h_MB1MB1MB1_dat", "h_MB1MB1MB1_dat",22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB1MB1_dat);
     h_MB1MB1MB1_tru = new TH3D("h_MB1MB1MB1_tru", "h_MB1MB1MB1_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB1MB1_tru);

    if(fCout) cout<<"subtraction histograms for E3C 2"<<endl; 

     h_JJMB = new TH3D("h_JJMB", "h_JJMB", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_JJMB);
     h_JJMB_dat = new TH2D("h_JJMB_dat", "h_JJMB_dat", 22, new_bins_const,100, new_bins);
     fOutput->Add(h_JJMB_dat);
     h_JJMB_tru = new TH3D("h_JJMB_tru", "h_JJMB_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_JJMB_tru);
     h_JMBMB = new TH3D("h_JMBMB", "h_JMBMB",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_JMBMB);
     h_JMBMB_dat = new TH2D("h_JMBMB_dat", "h_JMBMB_dat",22, new_bins_const,100, new_bins);
     fOutput->Add(h_JMBMB_dat);
     h_JMBMB_tru = new TH3D("h_JMBMB_tru", "h_JMBMB_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_JMBMB_tru);
     h_MB1MB1MB2 = new TH3D("h_MB1MB1MB2", "h_MB1MB1MB2",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB1MB2);
     h_MB1MB1MB2_dat = new TH2D("h_MB1MB1MB2_dat", "h_MB1MB1MB2_dat",22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB1MB2_dat);
     h_MB1MB1MB2_tru = new TH3D("h_MB1MB1MB2_tru", "h_MB1MB1MB2_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB1MB2_tru);
     h_MB1MB2MB2 = new TH3D("h_MB1MB2MB2", "h_MB1MB2MB2",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB2MB2);
     h_MB1MB2MB2_dat = new TH2D("h_MB1MB2MB2_dat", "h_MB1MB2MB2_dat",22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB2MB2_dat);
     h_MB1MB2MB2_tru = new TH3D("h_MB1MB2MB2_tru", "h_MB1MB2MB2_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB2MB2_tru);

    if(fCout) cout<<"subtraction histograms for E3C 3"<<endl; 

     h_JMB1MB2 = new TH3D("h_JMB1MB2", "h_JMB1MB2", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_JMB1MB2);
     h_JMB1MB2_dat = new TH2D("h_JMB1MB2_dat", "h_JMB1MB2_dat", 22, new_bins_const,100, new_bins);
     fOutput->Add(h_JMB1MB2_dat);
     h_JMB1MB2_tru = new TH3D("h_JMB1MB2_tru", "h_JMB1MB2_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_JMB1MB2_tru);
     h_MB1MB2MB3 = new TH3D("h_MB1MB2MB3", "h_MB1MB2MB3",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB2MB3);
     h_MB1MB2MB3_dat = new TH2D("h_MB1MB2MB3_dat", "h_MB1MB2MB3_dat",22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB2MB3_dat);
     h_MB1MB2MB3_tru = new TH3D("h_MB1MB2MB3_tru", "h_MB1MB2MB3_tru",22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_MB1MB2MB3_tru);

    if(fCout) cout<<"subtraction histograms for E3C 4"<<endl; 

     h_BMBMB = new TH3D("h_BMBMB", "h_BMBMB", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_BMBMB);
     h_SMBMB = new TH3D("h_SMBMB", "h_SMBMB", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_SMBMB);
     h_BMB1MB2 = new TH3D("h_BMB1MB2", "h_BMB1MB2", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_BMB1MB2);
     h_SMB1MB2 = new TH3D("h_SMB1MB2", "h_SMB1MB2", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_SMB1MB2);
     h_BBMB = new TH3D("h_BBMB", "h_BBMB", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_BBMB);
     h_SBMB = new TH3D("h_SBMB", "h_SBMB", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_SBMB);
     h_SSMB = new TH3D("h_SSMB", "h_SSMB", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_SSMB);

if(fCout) cout<<"subtraction histograms for E3C 5"<<endl;

     h_BMBMB_tru = new TH3D("h_BMBMB_tru", "h_BMBMB_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_BMBMB_tru);
     h_SMBMB_tru = new TH3D("h_SMBMB_tru", "h_SMBMB_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_SMBMB_tru);
     h_BMB1MB2_tru = new TH3D("h_BMB1MB2_tru", "h_BMB1MB2_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_BMB1MB2_tru);
     h_BBMB_tru = new TH3D("h_BBMB_tru", "h_BBMB_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_BBMB_tru);
     h_SBMB_tru = new TH3D("h_SBMB_tru", "h_SBMB_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_SBMB_tru);
     h_SSMB_tru = new TH3D("h_SSMB_tru", "h_SSMB_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_SSMB_tru);
     h_SMB1MB2_tru = new TH3D("h_SMB1MB2_tru", "h_SMB1MB2_tru", 22, new_bins_const,22, new_bins_const,100, new_bins);
     fOutput->Add(h_SMB1MB2_tru);


if(fCout)cout<<"#####################---Declaring 3D Embedding Histograms E3C----####################"<<endl;

    h3Jet_deltaR_MJ_e3c = new TH3D("h3Jet_deltaR_MJ_e3c", "h3Jet_deltaR_MJ_e3c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c);
    h3Jet_deltaR_MJ0_e3c = new TH3D("h3Jet_deltaR_MJ0_e3c", "h3Jet_deltaR_MJ0_e3c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c);
    h3Jet_deltaR_MJ1_e3c = new TH3D("h3Jet_deltaR_MJ1_e3c", "h3Jet_deltaR_MJ1_e3c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c);
    h3Jet_deltaR_MJ2_e3c = new TH3D("h3Jet_deltaR_MJ2_e3c", "h3Jet_deltaR_MJ2_e3c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c);
    h3Jet_deltaR_MJ3_e3c = new TH3D("h3Jet_deltaR_MJ3_e3c", "h3Jet_deltaR_MJ3_e3c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c);
    
    h3_MB1MB1MB1 = new TH3D("h3_MB1MB1MB1", "h3_MB1MB1MB1",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB1);
    h3_JJMB = new TH3D("h3_JJMB", "h3_JJMB", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JJMB);
    h3_JMBMB = new TH3D("h3_JMBMB", "h3_JMBMB",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMBMB);
    h3_MB1MB1MB2 = new TH3D("h3_MB1MB1MB2", "h3_MB1MB1MB2",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB2);
    h3_MB1MB2MB2 = new TH3D("h3_MB1MB2MB2", "h3_MB1MB2MB2",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB2);
    h3_JMB1MB2 = new TH3D("h3_JMB1MB2", "h3_JMB1MB2", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMB1MB2);
    h3_MB1MB2MB3 = new TH3D("h3_MB1MB2MB3", "h3_MB1MB2MB3",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB3);
    h3_BMBMB = new TH3D("h3_BMBMB", "h3_BMBMB", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMBMB);
    h3_SMBMB = new TH3D("h3_SMBMB", "h3_SMBMB", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMBMB);
    h3_BMB1MB2 = new TH3D("h3_BMB1MB2", "h3_BMB1MB2", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMB1MB2);
    h3_SMB1MB2 = new TH3D("h3_SMB1MB2", "h3_SMB1MB2", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMB1MB2);
    h3_BBMB = new TH3D("h3_BBMB", "h3_BBMB", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BBMB);
    h3_SBMB = new TH3D("h3_SBMB", "h3_SBMB", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SBMB);
    h3_SSMB = new TH3D("h3_SSMB", "h3_SSMB", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SSMB);
    
    
    h3Jet_deltaR_MJ_e3c_tru = new TH3D("h3Jet_deltaR_MJ_e3c_tru", "h3Jet_deltaR_MJ_e3c_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h_MJ_e3c_tru);
    h3Jet_deltaR_MJ0_e3c_tru = new TH3D("h3Jet_deltaR_MJ0_e3c_tru", "h3Jet_deltaR_MJ0_e3c_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h_MJ0_e3c_tru);
    h3Jet_deltaR_MJ1_e3c_tru = new TH3D("h3Jet_deltaR_MJ1_e3c_tru", "h3Jet_deltaR_MJ1_e3c_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h_MJ1_e3c_tru);
    h3Jet_deltaR_MJ2_e3c_tru = new TH3D("h3Jet_deltaR_MJ2_e3c_tru", "h3Jet_deltaR_MJ2_e3c_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h_MJ2_e3c_tru);
    h3Jet_deltaR_MJ3_e3c_tru = new TH3D("h3Jet_deltaR_MJ3_e3c_tru", "h3Jet_deltaR_MJ3_e3c_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h_MJ3_e3c_tru);
    h3_MB1MB1MB1_tru = new TH3D("h3_MB1MB1MB1_tru", "h3_MB1MB1MB1_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB1_tru);
    h3_JJMB_tru = new TH3D("h3_JJMB_tru", "h3_JJMB_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JJMB_tru);
    h3_JMBMB_tru = new TH3D("h3_JMBMB_tru", "h3_JMBMB_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMBMB_tru);
    h3_MB1MB1MB2_tru = new TH3D("h3_MB1MB1MB2_tru", "h3_MB1MB1MB2_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB2_tru);
    h3_MB1MB2MB2_tru = new TH3D("h3_MB1MB2MB2_tru", "h3_MB1MB2MB2_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB2_tru);
    h3_JMB1MB2_tru = new TH3D("h3_JMB1MB2_tru", "h3_JMB1MB2_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMB1MB2_tru);
    h3_MB1MB2MB3_tru = new TH3D("h3_MB1MB2MB3_tru", "h3_MB1MB2MB3_tru",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB3_tru);
    h3_BMBMB_tru = new TH3D("h3_BMBMB_tru", "h3_BMBMB_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMBMB_tru);
    h3_SMBMB_tru = new TH3D("h3_SMBMB_tru", "h3_SMBMB_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMBMB_tru);
    h3_BMB1MB2_tru = new TH3D("h3_BMB1MB2_tru", "h3_BMB1MB2_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMB1MB2_tru);
    h3_BBMB_tru = new TH3D("h3_BBMB_tru", "h3_BBMB_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BBMB_tru);
    h3_SBMB_tru = new TH3D("h3_SBMB_tru", "h3_SBMB_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SBMB_tru);
    h3_SSMB_tru = new TH3D("h3_SSMB_tru", "h3_SSMB_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SSMB_tru);
    h3_SMB1MB2_tru = new TH3D("h3_SMB1MB2_tru", "h3_SMB1MB2_tru", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMB1MB2_tru);
    
    //c-factor
    h3Jet_deltaR_MJ_e3c_c = new TH3D("h3Jet_deltaR_MJ_e3c_c", "h3Jet_deltaR_MJ_e3c_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c_c);
    h3Jet_deltaR_MJ0_e3c_c = new TH3D("h3Jet_deltaR_MJ0_e3c_c", "h3Jet_deltaR_MJ0_e3c_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c_c);
    h3Jet_deltaR_MJ1_e3c_c = new TH3D("h3Jet_deltaR_MJ1_e3c_c", "h3Jet_deltaR_MJ1_e3c_c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c_c);
    h3Jet_deltaR_MJ2_e3c_c = new TH3D("h3Jet_deltaR_MJ2_e3c_c", "h3Jet_deltaR_MJ2_e3c_c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c_c);
    h3Jet_deltaR_MJ3_e3c_c = new TH3D("h3Jet_deltaR_MJ3_e3c_c", "h3Jet_deltaR_MJ3_e3c_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c_c);
    h3_MB1MB1MB1_c = new TH3D("h3_MB1MB1MB1_c", "h3_MB1MB1MB1_c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB1_c);
    h3_JJMB_c = new TH3D("h3_JJMB_c", "h3_JJMB_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JJMB_c);
    h3_JMBMB_c = new TH3D("h3_JMBMB_c", "h3_JMBMB_c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMBMB_c);
    h3_MB1MB1MB2_c = new TH3D("h3_MB1MB1MB2_c", "h3_MB1MB1MB2_c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB2_c);
    h3_MB1MB2MB2_c = new TH3D("h3_MB1MB2MB2_c", "h3_MB1MB2MB2_c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB2_c);
    h3_JMB1MB2_c = new TH3D("h3_JMB1MB2_c", "h3_JMB1MB2_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMB1MB2_c);
    h3_MB1MB2MB3_c = new TH3D("h3_MB1MB2MB3_c", "h3_MB1MB2MB3_c",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB3_c);
    h3_BMBMB_c = new TH3D("h3_BMBMB_c", "h3_BMBMB_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMBMB_c);
    h3_SMBMB_c = new TH3D("h3_SMBMB_c", "h3_SMBMB_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMBMB_c);
    h3_BMB1MB2_c = new TH3D("h3_BMB1MB2_c", "h3_BMB1MB2_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMB1MB2_c);
    h3_SMB1MB2_c = new TH3D("h3_SMB1MB2_c", "h3_SMB1MB2_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMB1MB2_c);
    h3_BBMB_c = new TH3D("h3_BBMB_c", "h3_BBMB_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BBMB_c);
    h3_SBMB_c = new TH3D("h3_SBMB_c", "h3_SBMB_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SBMB_c);
    h3_SSMB_c = new TH3D("h3_SSMB_c", "h3_SSMB_c", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SSMB_c);
    
    
    //########################-------Matched jets ONLY--------###########################
    h3Jet_deltaR_MJ_e3c_m = new TH3D("h3Jet_deltaR_MJ_e3c_m", "h3Jet_deltaR_MJ_e3c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c_m);
    h3Jet_deltaR_MJ0_e3c_m = new TH3D("h3Jet_deltaR_MJ0_e3c_m", "h3Jet_deltaR_MJ0_e3c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c_m);
    h3Jet_deltaR_MJ1_e3c_m = new TH3D("h3Jet_deltaR_MJ1_e3c_m", "h3Jet_deltaR_MJ1_e3c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c_m);
    h3Jet_deltaR_MJ2_e3c_m = new TH3D("h3Jet_deltaR_MJ2_e3c_m", "h3Jet_deltaR_MJ2_e3c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c_m);
    h3Jet_deltaR_MJ3_e3c_m = new TH3D("h3Jet_deltaR_MJ3_e3c_m", "h3Jet_deltaR_MJ3_e3c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c_m);
    h3_MB1MB1MB1_m = new TH3D("h3_MB1MB1MB1_m", "h3_MB1MB1MB1_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB1_m);
    h3_JJMB_m = new TH3D("h3_JJMB_m", "h3_JJMB_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JJMB_m);
    h3_JMBMB_m = new TH3D("h3_JMBMB_m", "h3_JMBMB_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMBMB_m);
    h3_MB1MB1MB2_m = new TH3D("h3_MB1MB1MB2_m", "h3_MB1MB1MB2_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB2_m);
    h3_MB1MB2MB2_m = new TH3D("h3_MB1MB2MB2_m", "h3_MB1MB2MB2_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB2_m);
    h3_JMB1MB2_m = new TH3D("h3_JMB1MB2_m", "h3_JMB1MB2_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMB1MB2_m);
    h3_MB1MB2MB3_m = new TH3D("h3_MB1MB2MB3_m", "h3_MB1MB2MB3_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB3_m);
    h3_BMBMB_m = new TH3D("h3_BMBMB_m", "h3_BMBMB_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMBMB_m);
    h3_SMBMB_m = new TH3D("h3_SMBMB_m", "h3_SMBMB_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMBMB_m);
    h3_BMB1MB2_m = new TH3D("h3_BMB1MB2_m", "h3_BMB1MB2_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMB1MB2_m);
    h3_SMB1MB2_m = new TH3D("h3_SMB1MB2_m", "h3_SMB1MB2_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMB1MB2_m);
    h3_BBMB_m = new TH3D("h3_BBMB_m", "h3_BBMB_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BBMB_m);
    h3_SBMB_m = new TH3D("h3_SBMB_m", "h3_SBMB_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SBMB_m);
    h3_SSMB_m = new TH3D("h3_SSMB_m", "h3_SSMB_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SSMB_m);
    
    h3Jet_deltaR_MJ_e3c_tru_m = new TH3D("h3Jet_deltaR_MJ_e3c_tru_m", "h3Jet_deltaR_MJ_e3c_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c_tru_m);
    h3Jet_deltaR_MJ0_e3c_tru_m = new TH3D("h3Jet_deltaR_MJ0_e3c_tru_m", "h3Jet_deltaR_MJ0_e3c_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c_tru_m);
    h3Jet_deltaR_MJ1_e3c_tru_m = new TH3D("h3Jet_deltaR_MJ1_e3c_tru_m", "h3Jet_deltaR_MJ1_e3c_tru_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c_tru_m);
    h3Jet_deltaR_MJ2_e3c_tru_m = new TH3D("h3Jet_deltaR_MJ2_e3c_tru_m", "h3Jet_deltaR_MJ2_e3c_tru_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c_tru_m);
    h3Jet_deltaR_MJ3_e3c_tru_m = new TH3D("h3Jet_deltaR_MJ3_e3c_tru_m", "h3Jet_deltaR_MJ3_e3c_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c_tru_m);
    h3_JJMB_tru_m = new TH3D("h3_JJMB_tru_m", "h3_JJMB_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JJMB_tru_m);
    h3_JMBMB_tru_m = new TH3D("h3_JMBMB_tru_m", "h3_JMBMB_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMBMB_tru_m);
    h3_MB1MB1MB2_tru_m = new TH3D("h3_MB1MB1MB2_tru_m", "h3_MB1MB1MB2_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB2_tru_m);
    h3_MB1MB2MB2_tru_m = new TH3D("h3_MB1MB2MB2_tru_m", "h3_MB1MB2MB2_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB2_tru_m);
    h3_JMB1MB2_tru_m = new TH3D("h3_JMB1MB2_tru_m", "h3_JMB1MB2_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMB1MB2_tru_m);
    h3_MB1MB2MB3_tru_m = new TH3D("h3_MB1MB2MB3_tru_m", "h3_MB1MB2MB3_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB3_tru_m);
    h3_BMBMB_tru_m = new TH3D("h3_BMBMB_tru_m", "h3_BMBMB_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMBMB_tru_m);
    h3_SMBMB_tru_m = new TH3D("h3_SMBMB_tru_m", "h3_SMBMB_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMBMB_tru_m);
    h3_BMB1MB2_tru_m = new TH3D("h3_BMB1MB2_tru_m", "h3_BMB1MB2_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMB1MB2_tru_m);
    h3_BBMB_tru_m = new TH3D("h3_BBMB_tru_m", "h3_BBMB_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BBMB_tru_m);
    h3_SBMB_tru_m = new TH3D("h3_SBMB_tru_m", "h3_SBMB_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SBMB_tru_m);
    h3_SSMB_tru_m = new TH3D("h3_SSMB_tru_m", "h3_SSMB_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SSMB_tru_m);
    h3_SMB1MB2_tru_m = new TH3D("h3_SMB1MB2_tru_m", "h3_SMB1MB2_tru_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMB1MB2_tru_m);
    
    //c-factor
    h3Jet_deltaR_MJ_e3c_c_m = new TH3D("h3Jet_deltaR_MJ_e3c_c_m", "h3Jet_deltaR_MJ_e3c_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c_c_m);
    h3Jet_deltaR_MJ0_e3c_c_m = new TH3D("h3Jet_deltaR_MJ0_e3c_c_m", "h3Jet_deltaR_MJ0_e3c_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c_c_m);
    h3Jet_deltaR_MJ1_e3c_c_m = new TH3D("h3Jet_deltaR_MJ1_e3c_c_m", "h3Jet_deltaR_MJ1_e3c_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c_c_m);
    h3Jet_deltaR_MJ2_e3c_c_m = new TH3D("h3Jet_deltaR_MJ2_e3c_c_m", "h3Jet_deltaR_MJ2_e3c_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c_c_m);
    h3Jet_deltaR_MJ3_e3c_c_m = new TH3D("h3Jet_deltaR_MJ3_e3c_c_m", "h3Jet_deltaR_MJ3_e3c_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c_c_m);
    h3_MB1MB1MB1_c_m = new TH3D("h3_MB1MB1MB1_c_m", "h3_MB1MB1MB1_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB1_c_m);
    h3_JJMB_c_m = new TH3D("h3_JJMB_c_m", "h3_JJMB_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JJMB_c_m);
    h3_JMBMB_c_m = new TH3D("h3_JMBMB_c_m", "h3_JMBMB_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMBMB_c_m);
    h3_MB1MB1MB2_c_m = new TH3D("h3_MB1MB1MB2_c_m", "h3_MB1MB1MB2_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB2_c_m);
    h3_MB1MB2MB2_c_m = new TH3D("h3_MB1MB2MB2_c_m", "h3_MB1MB2MB2_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB2_c_m);
    h3_JMB1MB2_c_m = new TH3D("h3_JMB1MB2_c_m", "h3_JMB1MB2_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMB1MB2_c_m);
    h3_MB1MB2MB3_c_m = new TH3D("h3_MB1MB2MB3_c_m", "h3_MB1MB2MB3_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB3_c_m);
    h3_BMBMB_c_m = new TH3D("h3_BMBMB_c_m", "h3_BMBMB_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMBMB_c_m);
    h3_SMBMB_c_m = new TH3D("h3_SMBMB_c_m", "h3_SMBMB_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMBMB_c_m);
    h3_BMB1MB2_c_m = new TH3D("h3_BMB1MB2_c_m", "h3_BMB1MB2_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMB1MB2_c_m);
    h3_SMB1MB2_c_m = new TH3D("h3_SMB1MB2_c_m", "h3_SMB1MB2_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMB1MB2_c_m);
    h3_BBMB_c_m = new TH3D("h3_BBMB_c_m", "h3_BBMB_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BBMB_c_m);
    h3_SBMB_c_m = new TH3D("h3_SBMB_c_m", "h3_SBMB_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SBMB_c_m);
    h3_SSMB_c_m = new TH3D("h3_SSMB_c_m", "h3_SSMB_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SSMB_c_m);
    
    h3Jet_deltaR_MJ_e3c_tru_c_m = new TH3D("h3Jet_deltaR_MJ_e3c_tru_c_m", "h3Jet_deltaR_MJ_e3c_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c_tru_c_m);
    h3Jet_deltaR_MJ0_e3c_tru_c_m = new TH3D("h3Jet_deltaR_MJ0_e3c_tru_c_m", "h3Jet_deltaR_MJ0_e3c_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c_tru_c_m);
    h3Jet_deltaR_MJ1_e3c_tru_c_m = new TH3D("h3Jet_deltaR_MJ1_e3c_tru_c_m", "h3Jet_deltaR_MJ1_e3c_tru_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c_tru_c_m);
    h3Jet_deltaR_MJ2_e3c_tru_c_m = new TH3D("h3Jet_deltaR_MJ2_e3c_tru_c_m", "h3Jet_deltaR_MJ2_e3c_tru_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c_tru_c_m);
    h3Jet_deltaR_MJ3_e3c_tru_c_m = new TH3D("h3Jet_deltaR_MJ3_e3c_tru_c_m", "h3Jet_deltaR_MJ3_e3c_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c_tru_c_m);
    
    h3_MB1MB1MB1_tru_c_m = new TH3D("h3_MB1MB1MB1_tru_c_m", "h3_MB1MB1MB1_tru_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB1_tru_c_m);
    h3_JJMB_tru_c_m = new TH3D("h3_JJMB_tru_c_m", "h3_JJMB_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JJMB_tru_c_m);
    h3_JMBMB_tru_c_m = new TH3D("h3_JMBMB_tru_c_m", "h3_JMBMB_tru_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMBMB_tru_c_m);
    h3_MB1MB1MB2_tru_c_m = new TH3D("h3_MB1MB1MB2_tru_c_m", "h3_MB1MB1MB2_tru_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB1MB2_tru_c_m);
    h3_MB1MB2MB2_tru_c_m = new TH3D("h3_MB1MB2MB2_tru_c_m", "h3_MB1MB2MB2_tru_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB2_tru_c_m);
    h3_JMB1MB2_tru_c_m = new TH3D("h3_JMB1MB2_tru_c_m", "h3_JMB1MB2_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_JMB1MB2_tru_c_m);
    h3_MB1MB2MB3_tru_c_m = new TH3D("h3_MB1MB2MB3_tru_c_m", "h3_MB1MB2MB3_tru_c_m",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_MB1MB2MB3_tru_c_m);
    h3_BMBMB_tru_c_m = new TH3D("h3_BMBMB_tru_c_m", "h3_BMBMB_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMBMB_tru_c_m);
    h3_SMBMB_tru_c_m = new TH3D("h3_SMBMB_tru_c_m", "h3_SMBMB_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMBMB_tru_c_m);
    h3_BMB1MB2_tru_c_m = new TH3D("h3_BMB1MB2_tru_c_m", "h3_BMB1MB2_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BMB1MB2_tru_c_m);
    h3_SMB1MB2_tru_c_m = new TH3D("h3_SMB1MB2_tru_c_m", "h3_SMB1MB2_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SMB1MB2_tru_c_m);
    h3_BBMB_tru_c_m = new TH3D("h3_BBMB_tru_c_m", "h3_BBMB_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_BBMB_tru_c_m);
    h3_SBMB_tru_c_m = new TH3D("h3_SBMB_tru_c_m", "h3_SBMB_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SBMB_tru_c_m);
    h3_SSMB_tru_c_m = new TH3D("h3_SSMB_tru_c_m", "h3_SSMB_tru_c_m", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3_SSMB_tru_c_m);


    //########################-------Unmatched jets ONLY--------###########################
    h3Jet_deltaR_MJ_e3c_um = new TH3D("h3Jet_deltaR_MJ_e3c_um", "h3Jet_deltaR_MJ_e3c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c_um);
    h3Jet_deltaR_MJ0_e3c_um = new TH3D("h3Jet_deltaR_MJ0_e3c_um", "h3Jet_deltaR_MJ0_e3c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c_um);
    h3Jet_deltaR_MJ1_e3c_um = new TH3D("h3Jet_deltaR_MJ1_e3c_um", "h3Jet_deltaR_MJ1_e3c_um",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c_um);
    h3Jet_deltaR_MJ2_e3c_um = new TH3D("h3Jet_deltaR_MJ2_e3c_um", "h3Jet_deltaR_MJ2_e3c_um",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c_um);
    h3Jet_deltaR_MJ3_e3c_um = new TH3D("h3Jet_deltaR_MJ3_e3c_um", "h3Jet_deltaR_MJ3_e3c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c_um);
    
    h3_MB1MB1MB1_um = new TH3D("h3_MB1MB1MB1_um", "h3_MB1MB1MB1_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB1_um);
    h3_JJMB_um = new TH3D("h3_JJMB_um", "h3_JJMB_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JJMB_um);
    h3_JMBMB_um = new TH3D("h3_JMBMB_um", "h3_JMBMB_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMBMB_um);
    h3_MB1MB1MB2_um = new TH3D("h3_MB1MB1MB2_um", "h3_MB1MB1MB2_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB2_um);
    h3_MB1MB2MB2_um = new TH3D("h3_MB1MB2MB2_um", "h3_MB1MB2MB2_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB2_um);
    h3_JMB1MB2_um = new TH3D("h3_JMB1MB2_um", "h3_JMB1MB2_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMB1MB2_um);
    h3_MB1MB2MB3_um = new TH3D("h3_MB1MB2MB3_um", "h3_MB1MB2MB3_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB3_um);
    h3_BMBMB_um = new TH3D("h3_BMBMB_um", "h3_BMBMB_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMBMB_um);
    h3_SMBMB_um = new TH3D("h3_SMBMB_um", "h3_SMBMB_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMBMB_um);
    h3_BMB1MB2_um = new TH3D("h3_BMB1MB2_um", "h3_BMB1MB2_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMB1MB2_um);
    h3_SMB1MB2_um = new TH3D("h3_SMB1MB2_um", "h3_SMB1MB2_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMB1MB2_um);
    h3_BBMB_um = new TH3D("h3_BBMB_um", "h3_BBMB_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BBMB_um);
    h3_SBMB_um = new TH3D("h3_SBMB_um", "h3_SBMB_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SBMB_um);
    h3_SSMB_um = new TH3D("h3_SSMB_um", "h3_SSMB_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SSMB_um);
    
    h3_JJMB_tru_um = new TH3D("h3_JJMB_tru_um", "h3_JJMB_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JJMB_tru_um);
    h3_JMBMB_tru_um = new TH3D("h3_JMBMB_tru_um", "h3_JMBMB_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMBMB_tru_um);
    h3_MB1MB1MB2_tru_um = new TH3D("h3_MB1MB1MB2_tru_um", "h3_MB1MB1MB2_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB2_tru_um);
    h3_MB1MB2MB2_tru_um = new TH3D("h3_MB1MB2MB2_tru_um", "h3_MB1MB2MB2_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB2_tru_um);
    h3_JMB1MB2_tru_um = new TH3D("h3_JMB1MB2_tru_um", "h3_JMB1MB2_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMB1MB2_tru_um);
    h3_MB1MB2MB3_tru_um = new TH3D("h3_MB1MB2MB3_tru_um", "h3_MB1MB2MB3_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB3_tru_um);
    h3_BMBMB_tru_um = new TH3D("h3_BMBMB_tru_um", "h3_BMBMB_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMBMB_tru_um);
    h3_SMBMB_tru_um = new TH3D("h3_SMBMB_tru_um", "h3_SMBMB_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMBMB_tru_um);
    h3_BMB1MB2_tru_um = new TH3D("h3_BMB1MB2_tru_um", "h3_BMB1MB2_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMB1MB2_tru_um);
    h3_BBMB_tru_um = new TH3D("h3_BBMB_tru_um", "h3_BBMB_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BBMB_tru_um);
    h3_SBMB_tru_um = new TH3D("h3_SBMB_tru_um", "h3_SBMB_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SBMB_tru_um);
    h3_SSMB_tru_um = new TH3D("h3_SSMB_tru_um", "h3_SSMB_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SSMB_tru_um);
    h3_SMB1MB2_tru_um = new TH3D("h3_SMB1MB2_tru_um", "h3_SMB1MB2_tru_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMB1MB2_tru_um);
    
    
    //c-factor
    h3Jet_deltaR_MJ_e3c_c_um = new TH3D("h3Jet_deltaR_MJ_e3c_c_um", "h3Jet_deltaR_MJ_e3c_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c_c_um);
    h3Jet_deltaR_MJ0_e3c_c_um = new TH3D("h3Jet_deltaR_MJ0_e3c_c_um", "h3Jet_deltaR_MJ0_e3c_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c_c_um);
    h3Jet_deltaR_MJ1_e3c_c_um = new TH3D("h3Jet_deltaR_MJ1_e3c_c_um", "h3Jet_deltaR_MJ1_e3c_c_um",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c_c_um);
    h3Jet_deltaR_MJ2_e3c_c_um = new TH3D("h3Jet_deltaR_MJ2_e3c_c_um", "h3Jet_deltaR_MJ2_e3c_c_um",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c_c_um);
    h3Jet_deltaR_MJ3_e3c_c_um = new TH3D("h3Jet_deltaR_MJ3_e3c_c_um", "h3Jet_deltaR_MJ3_e3c_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c_c_um);

    
    h3_MB1MB1MB1_c_um = new TH3D("h3_MB1MB1MB1_c_um", "h3_MB1MB1MB1_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB1_c_um);
    h3_JJMB_c_um = new TH3D("h3_JJMB_c_um", "h3_JJMB_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JJMB_c_um);
    h3_JMBMB_c_um = new TH3D("h3_JMBMB_c_um", "h3_JMBMB_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMBMB_c_um);
    h3_MB1MB1MB2_c_um = new TH3D("h3_MB1MB1MB2_c_um", "h3_MB1MB1MB2_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB2_c_um);
    h3_MB1MB2MB2_c_um = new TH3D("h3_MB1MB2MB2_c_um", "h3_MB1MB2MB2_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB2_c_um);
    h3_JMB1MB2_c_um = new TH3D("h3_JMB1MB2_c_um", "h3_JMB1MB2_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMB1MB2_c_um);
    h3_MB1MB2MB3_c_um = new TH3D("h3_MB1MB2MB3_c_um", "h3_MB1MB2MB3_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB3_c_um);
    h3_BMBMB_c_um = new TH3D("h3_BMBMB_c_um", "h3_BMBMB_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMBMB_c_um);
    h3_SMBMB_c_um = new TH3D("h3_SMBMB_c_um", "h3_SMBMB_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMBMB_c_um);
    h3_BMB1MB2_c_um = new TH3D("h3_BMB1MB2_c_um", "h3_BMB1MB2_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMB1MB2_c_um);
    h3_SMB1MB2_c_um = new TH3D("h3_SMB1MB2_c_um", "h3_SMB1MB2_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMB1MB2_c_um);
    h3_BBMB_c_um = new TH3D("h3_BBMB_c_um", "h3_BBMB_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BBMB_c_um);
    h3_SBMB_c_um = new TH3D("h3_SBMB_c_um", "h3_SBMB_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SBMB_c_um);
    h3_SSMB_c_um = new TH3D("h3_SSMB_c_um", "h3_SSMB_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SSMB_c_um);
    
    h3Jet_deltaR_MJ_e3c_tru_c_um = new TH3D("h3Jet_deltaR_MJ_e3c_tru_c_um", "h3Jet_deltaR_MJ_e3c_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ_e3c_tru_c_um);
    h3Jet_deltaR_MJ0_e3c_tru_c_um = new TH3D("h3Jet_deltaR_MJ0_e3c_tru_c_um", "h3Jet_deltaR_MJ0_e3c_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ0_e3c_tru_c_um);
    h3Jet_deltaR_MJ1_e3c_tru_c_um = new TH3D("h3Jet_deltaR_MJ1_e3c_tru_c_um", "h3Jet_deltaR_MJ1_e3c_tru_c_um",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ1_e3c_tru_c_um);
    h3Jet_deltaR_MJ2_e3c_tru_c_um = new TH3D("h3Jet_deltaR_MJ2_e3c_tru_c_um", "h3Jet_deltaR_MJ2_e3c_tru_c_um",nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ2_e3c_tru_c_um);
    h3Jet_deltaR_MJ3_e3c_tru_c_um = new TH3D("h3Jet_deltaR_MJ3_e3c_tru_c_um", "h3Jet_deltaR_MJ3_e3c_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins,wtbins);
    fOutput->Add(h3Jet_deltaR_MJ3_e3c_tru_c_um);
    h3_MB1MB1MB1_tru_c_um = new TH3D("h3_MB1MB1MB1_tru_c_um", "h3_MB1MB1MB1_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB1_tru_c_um);
    h3_JJMB_tru_c_um = new TH3D("h3_JJMB_tru_c_um", "h3_JJMB_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JJMB_tru_c_um);
    h3_JMBMB_tru_c_um = new TH3D("h3_JMBMB_tru_c_um", "h3_JMBMB_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMBMB_tru_c_um);
    h3_MB1MB1MB2_tru_c_um = new TH3D("h3_MB1MB1MB2_tru_c_um", "h3_MB1MB1MB2_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB1MB2_tru_c_um);
    h3_MB1MB2MB2_tru_c_um = new TH3D("h3_MB1MB2MB2_tru_c_um", "h3_MB1MB2MB2_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB2_tru_c_um);
    h3_JMB1MB2_tru_c_um = new TH3D("h3_JMB1MB2_tru_c_um", "h3_JMB1MB2_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_JMB1MB2_tru_c_um);
    h3_MB1MB2MB3_tru_c_um = new TH3D("h3_MB1MB2MB3_tru_c_um", "h3_MB1MB2MB3_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_MB1MB2MB3_tru_c_um);
    h3_BMBMB_tru_c_um = new TH3D("h3_BMBMB_tru_c_um", "h3_BMBMB_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMBMB_tru_c_um);
    h3_SMBMB_tru_c_um = new TH3D("h3_SMBMB_tru_c_um", "h3_SMBMB_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMBMB_tru_c_um);
    h3_BMB1MB2_tru_c_um = new TH3D("h3_BMB1MB2_tru_c_um", "h3_BMB1MB2_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BMB1MB2_tru_c_um);
    h3_SMB1MB2_tru_c_um = new TH3D("h3_SMB1MB2_tru_c_um", "h3_SMB1MB2_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SMB1MB2_tru_c_um);
    h3_BBMB_tru_c_um = new TH3D("h3_BBMB_tru_c_um", "h3_BBMB_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_BBMB_tru_c_um);
    h3_SBMB_tru_c_um = new TH3D("h3_SBMB_tru_c_um", "h3_SBMB_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SBMB_tru_c_um);
    h3_SSMB_tru_c_um = new TH3D("h3_SSMB_tru_c_um", "h3_SSMB_tru_c_um", nJetPtbins, xbins, ndRbins, dRbins, nWtbins, wtbins);
    fOutput->Add(h3_SSMB_tru_c_um);

    


// //________________________________________________________________________
// //bkgindex = -1 for jet background particle, -2 for first thermal cone, -3 for second thermal cone, -4 for third thermal cone
// //pt is true (gen) level jet pT, jetpt is the pT of the embedded subtracted jet
void ComputeE3C(std::vector<fastjet::PseudoJet> particles, std::vector<fastjet::PseudoJet> particles2,std::vector<fastjet::PseudoJet> particles3, double jetpt, float pt, string typeSame, std::string type, bool ifMatchedJet)
{
    if(fCout){cout<<particles.size()<<" and "<<particles2.size()<<" and "<<particles3.size()<<endl;}
    int mult = particles.size();
    int mult2 = particles2.size();
    int mult3 = particles3.size();
    
    double w = 0;
    double w_tru = 0;
    double w_iij = 0;
    double w_tru_iij = 0;
    double w_e3c_3D = 0;
    double w_e3c_tru_3D = 0;
    double w_iij_3D = 0;
    double w_tru_iij_3D = 0;
    
    double w_ijs = 0;
    double w_ijs_tru = 0;
    
    double w_ijs_3D = 0;
    double w_ijs_tru_3D = 0;
    
    double w_twosame = 0;
    double w_twosame_tru = 0;
    
    double w_twosame_3D = 0;
    double w_twosame_tru_3D = 0;
    
    double w_ijk = 0;
    double w_ijk_tru = 0;
    
    double w_ijk_3D = 0;
    double w_ijk_tru_3D = 0;
    
    
    if(fCout){cout<<"!!!!!!!!!!after setting: "<<mult<<" and "<<mult2<<" and "<<mult3<<endl;}
    if(fCout){cout<<"!!!!!!!!!!Setting are: typeSame "<<typeSame<<" and type "<<type<<endl;}
    
    if(typeSame == "all"){
        for (int i = 0; i < mult; i++)
        {
            if(particles.at(i).pt()<corrTrkCut) continue;
            for (int j = i+1; j < mult; j++)
            {
                if(particles.at(j).pt()<corrTrkCut) continue;
                
                if(fCout){cout<<"in this loop"<<endl;}
                
                
                w = (1./(jetpt*jetpt*jetpt))*(3*particles.at(i).pt()*particles.at(j).pt()*particles.at(j).pt());
                w_tru = (1./(pt*pt*pt))*(3*particles.at(i).pt()*particles.at(j).pt()*particles.at(j).pt());
                
                w_iij = (1./(jetpt*jetpt*jetpt))*(3*particles.at(i).pt()*particles.at(i).pt()*particles.at(j).pt());
                w_tru_iij = (1./(pt*pt*pt))*(3*particles.at(i).pt()*particles.at(i).pt()*particles.at(j).pt());
                
                
                w_e3c_3D =  (1./(jetpt*jetpt*jetpt))*(particles.at(i).pt()*particles.at(j).pt()*particles.at(j).pt());
                w_e3c_tru_3D =  (1./(pt*pt*pt))*(particles.at(i).pt()*particles.at(j).pt()*particles.at(j).pt());
                
                w_iij_3D =  (1./(jetpt*jetpt*jetpt))*(particles.at(i).pt()*particles.at(i).pt()*particles.at(j).pt());
                w_iij_tru_3D =  (1./(pt*pt*pt))*(particles.at(i).pt()*particles.at(i).pt()*particles.at(j).pt());
                
                
                
                double dR = delR(particles.at(i), particles.at(j));
                int i1 = particles.at(i).user_index();
                int i2 = particles.at(j).user_index();
                
                if(fCout){cout<<"weights calculated"<<endl;}
                
                if(type =="sameJet")
                {
                    hJet_deltaR_MJ_e3c->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ_e3c->Fill(jetpt, pt, dR, w_iij);
                    h3Jet_deltaR_MJ_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c->Fill(jetpt, dR, w_iij_3D);
                    h3Jet_deltaR_MJ_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c->Fill(jetpt, dR, w_iij_3D);
                    h3Jet_deltaR_MJ_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c->Fill(jetpt, dR, w_iij_3D);
                    
                    
                    if(ifMatchedJet){
                        if(fCout){cout<<"filling matched case"<<endl;}
                        
                        if(cfactor){
                            hJet_deltaR_MJ_e3c_c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ_e3c_c_m->Fill(jetpt, pt, dR, w_iij);
                            hJet_deltaR_MJ_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru_iij);
                            
                            h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                            
                            h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                            h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                            h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                        }
                        else{
                            hJet_deltaR_MJ_e3c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ_e3c_m->Fill(jetpt, pt, dR, w_iij);
                            hJet_deltaR_MJ_e3c_tru_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ_e3c_tru_m->Fill(jetpt, pt, dR, w_tru_iij);
                            
                            h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, dR, w_iij_3D);
                            
                            h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                            h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                            h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                        }
                        else{
                            
                            if(cfactor){
                                hJet_deltaR_MJ_e3c_c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ_e3c_c_um->Fill(jetpt, pt, dR, w_iij);
                                
                                h3Jet_deltaR_MJ_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                h3Jet_deltaR_MJ_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                h3Jet_deltaR_MJ_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                
                            }
                            else{
                                hJet_deltaR_MJ_e3c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ_e3c_um->Fill(jetpt, pt, dR, w_iij);
                                
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, dR, w_iij_3D);
                            }
                            
                        }
                        
                        if ((i1 == 0) && (i2 == 0)) {
                            hJet_deltaR_MJ0_e3c->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ0_e3c->Fill(jetpt, pt, dR, w_iij);
                            
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c->Fill(jetpt, dR, w_iij_3D);
                            
                            if(ifMatchedJet){
                                if(cfactor){
                                    hJet_deltaR_MJ0_e3c_c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ0_e3c_c_m->Fill(jetpt, pt, dR, w_iij);
                                    hJet_deltaR_MJ0_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ0_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru_iij);
                                    
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    
                                }
                                else{
                                    hJet_deltaR_MJ0_e3c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ0_e3c_m->Fill(jetpt, pt, dR, w_iij);
                                    hJet_deltaR_MJ0_e3c_tru_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ0_e3c_tru_m->Fill(jetpt, pt, dR, w_tru_iij);
                                    
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    
                                }
                            }
                            else{
                                
                                if(cfactor){
                                    hJet_deltaR_MJ0_e3c_c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ0_e3c_c_um->Fill(jetpt, pt, dR, w_iij);
                                    
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    
                                }
                                else{
                                    hJet_deltaR_MJ0_e3c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ0_e3c_um->Fill(jetpt, pt, dR, w_iij);
                                    
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                }
                                
                            }
                        }//fake fake fake
                        else if (i2 == 0) {
                            hJet_deltaR_MJ1_e3c->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ2_e3c->Fill(jetpt, pt, dR, w_iij);
                            
                            
                            h3Jet_deltaR_MJ1_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ1_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ1_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c->Fill(jetpt, dR, w_iij_3D);
                            
                            if(ifMatchedJet){
                                if(cfactor){
                                    hJet_deltaR_MJ1_e3c_c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ2_e3c_c_m->Fill(jetpt, pt, dR, w_iij);
                                    hJet_deltaR_MJ1_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ2_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru_iij);
                                    
                                    h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    
                                    h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    
                                }
                                else{
                                    hJet_deltaR_MJ1_e3c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ2_e3c_m->Fill(jetpt, pt, dR, w_iij);
                                    hJet_deltaR_MJ1_e3c_tru_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ2_e3c_tru_m->Fill(jetpt, pt, dR, w_tru_iij);
                                    
                                    h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    
                                    h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                }
                            }
                            else{
                                
                                if(cfactor){
                                    hJet_deltaR_MJ1_e3c_c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ2_e3c_c_um->Fill(jetpt, pt, dR, w_iij);
                                    
                                    h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    
                                }
                                else{
                                    hJet_deltaR_MJ1_e3c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ2_e3c_um->Fill(jetpt, pt, dR, w_iij);
                                    
                                    h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    
                                }
                                
                            }
                        }//real fake fake for ijj & real real fake for iij
                        else if (i1 == 0) {
                            hJet_deltaR_MJ2_e3c->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ1_e3c->Fill(jetpt, pt, dR, w_iij);
                            
                            
                            h3Jet_deltaR_MJ2_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ2_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ2_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c->Fill(jetpt, dR, w_iij_3D);
                            
                            
                            if(ifMatchedJet){
                                if(cfactor){
                                    hJet_deltaR_MJ2_e3c_c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ1_e3c_c_m->Fill(jetpt, pt, dR, w_iij);
                                    hJet_deltaR_MJ2_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ1_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru_iij);
                                    
                                    h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    
                                    h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                }
                                else{
                                    hJet_deltaR_MJ2_e3c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ1_e3c_m->Fill(jetpt, pt, dR, w_iij);
                                    hJet_deltaR_MJ2_e3c_tru_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ1_e3c_tru_m->Fill(jetpt, pt, dR, w_tru_iij);
                                    
                                    h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                }
                            }
                            else{
                                if(cfactor){
                                    hJet_deltaR_MJ2_e3c_c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ1_e3c_c_um->Fill(jetpt, pt, dR, w_iij);
                                    
                                    h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                }
                                else{
                                    hJet_deltaR_MJ2_e3c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ1_e3c_um->Fill(jetpt, pt, dR, w_iij);
                                    
                                    h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    
                                }
                            }
                            
                        }//real real fake
                        else {
                            hJet_deltaR_MJ3_e3c->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ3_e3c->Fill(jetpt, pt, dR, w_iij);
                            
                            h3Jet_deltaR_MJ3_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ3_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c->Fill(jetpt, dR, w_iij_3D);
                            h3Jet_deltaR_MJ3_e3c->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c->Fill(jetpt, dR, w_iij_3D);
                            
                            
                            if(ifMatchedJet){
                                if(cfactor){
                                    hJet_deltaR_MJ3_e3c_c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ3_e3c_c_m->Fill(jetpt, pt, dR, w_iij);
                                    hJet_deltaR_MJ3_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ3_e3c_tru_c_m->Fill(jetpt, pt, dR, w_tru_iij);
                                    
                                    h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, dR, w_iij_3D);
                                    
                                    h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                                    
                                }
                                else{
                                    hJet_deltaR_MJ3_e3c_m->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ3_e3c_m->Fill(jetpt, pt, dR, w_iij);
                                    hJet_deltaR_MJ3_e3c_tru_m->Fill(jetpt, pt, dR, w_tru);hJet_deltaR_MJ3_e3c_tru_m->Fill(jetpt, pt, dR, w_tru_iij);
                                    
                                    h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, dR, w_iij_3D);
                                    
                                    h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                    h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, dR, w_iij_tru_3D);
                                }
                            }
                            else{
                                if(cfactor){
                                    hJet_deltaR_MJ3_e3c_c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ3_e3c_c_um->Fill(jetpt, pt, dR, w_iij);
                                    
                                    h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, dR, w_iij_3D);
                                }
                                else{
                                    hJet_deltaR_MJ3_e3c_um->Fill(jetpt, pt, dR, w);hJet_deltaR_MJ3_e3c_um->Fill(jetpt, pt, dR, w_iij);
                                    
                                    h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                    h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, dR, w_e3c_3D);h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, dR, w_iij_3D);
                                }
                            }
                            
                        }//both are pythia
                    }
                    
                }
                
                if(type=="sameMB"){
                    
                    if(fCout){cout<<"fill same MB"<<endl;}
                    h_MB1MB1MB1->Fill(jetpt, pt, dR, w);
                    h_MB1MB1MB1->Fill(jetpt, pt, dR, w_iij);
                    
                    h3_MB1MB1MB1->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1->Fill(jetpt, dR, w_iij_3D);
                    h3_MB1MB1MB1->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1->Fill(jetpt, dR, w_iij_3D);
                    h3_MB1MB1MB1->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1->Fill(jetpt, dR, w_iij_3D);
                    
                    
                    if(ifMatchedJet){
                        if(cfactor){
                            h_MB1MB1MB1_c_m->Fill(jetpt, pt, dR, w);
                            h_MB1MB1MB1_c_m->Fill(jetpt, pt, dR, w_iij);
                            
                            h_MB1MB1MB1_tru_c_m->Fill(jetpt, pt, dR, w_tru);
                            h_MB1MB1MB1_tru_c_m->Fill(jetpt, pt, dR, w_tru_iij);
                            
                            h3_MB1MB1MB1_c_m->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_c_m->Fill(jetpt, dR, w_iij_3D);
                            h3_MB1MB1MB1_c_m->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_c_m->Fill(jetpt, dR, w_iij_3D);
                            h3_MB1MB1MB1_c_m->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_c_m->Fill(jetpt, dR, w_iij_3D);
                            
                            h3_MB1MB1MB1_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3_MB1MB1MB1_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                            h3_MB1MB1MB1_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3_MB1MB1MB1_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                            h3_MB1MB1MB1_tru_c_m->Fill(pt, dR, w_e3c_tru_3D);h3_MB1MB1MB1_tru_c_m->Fill(pt, dR, w_iij_tru_3D);
                            
                        }
                        else{
                            h_MB1MB1MB1_m->Fill(jetpt, pt, dR, w);
                            h_MB1MB1MB1_m->Fill(jetpt, pt, dR, w_iij);
                            
                            h_MB1MB1MB1_tru_m->Fill(jetpt, pt, dR, w_tru);
                            h_MB1MB1MB1_tru_m->Fill(jetpt, pt, dR, w_tru_iij);
                            
                            h3_MB1MB1MB1_m->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_m->Fill(jetpt, dR, w_iij_3D);
                            h3_MB1MB1MB1_m->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_m->Fill(jetpt, dR, w_iij_3D);
                            h3_MB1MB1MB1_m->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_m->Fill(jetpt, dR, w_iij_3D);
                            
                            h3_MB1MB1MB1_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3_MB1MB1MB1_tru_m->Fill(pt, dR, w_iij_tru_3D);
                            h3_MB1MB1MB1_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3_MB1MB1MB1_tru_m->Fill(pt, dR, w_iij_tru_3D);
                            h3_MB1MB1MB1_tru_m->Fill(pt, dR, w_e3c_tru_3D);h3_MB1MB1MB1_tru_m->Fill(pt, dR, w_iij_tru_3D);
                            
                        }
                        if(fCout){cout<<"matched same MB filled"<<endl;}
                    }
                    else{
                        if(cfactor){
                            h_MB1MB1MB1_c_um->Fill(jetpt, pt, dR, w);
                            h_MB1MB1MB1_c_um->Fill(jetpt, pt, dR, w_iij);
                            
                            h3_MB1MB1MB1_c_um->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_c_um->Fill(jetpt, dR, w_iij_3D);
                            h3_MB1MB1MB1_c_um->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_c_um->Fill(jetpt, dR, w_iij_3D);
                            h3_MB1MB1MB1_c_um->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_c_um->Fill(jetpt, dR, w_iij_3D);
                            
                        }
                        else{
                            h_MB1MB1MB1_um->Fill(jetpt, pt, dR, w);
                            h_MB1MB1MB1_um->Fill(jetpt, pt, dR, w_iij);
                            
                            h3_MB1MB1MB1_um->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_um->Fill(jetpt, dR, w_iij_3D);
                            h3_MB1MB1MB1_um->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_um->Fill(jetpt, dR, w_iij_3D);
                            h3_MB1MB1MB1_um->Fill(jetpt, dR, w_e3c_3D);h3_MB1MB1MB1_um->Fill(jetpt, dR, w_iij_3D);
                            
                        }
                        
                    }
                    
                    if(fCout){cout<<"same MB filled"<<endl;}
                }
                for (int s = j+1; s < mult; s++)
                {
                    
                    if(particles.at(s).pt()<corrTrkCut) continue;
                    
                    if(fCout){cout<<"s=j+1 loop"<<endl;}
                    
                    
                    w_ijs = (1./(jetpt*jetpt*jetpt))*(6*particles.at(i).pt()*particles.at(j).pt()*particles.at(s).pt());
                    w_ijs_tru = (1./(pt*pt*pt))*(6*particles.at(i).pt()*particles.at(j).pt()*particles.at(s).pt());
                    
                    w_ijs_3D = (1./(jetpt*jetpt*jetpt))*(particles.at(i).pt()*particles.at(j).pt()*particles.at(s).pt());
                    w_ijs_tru_3D = (1./(pt*pt*pt))*(particles.at(i).pt()*particles.at(j).pt()*particles.at(s).pt());
                    
                    
                    double dR_ij = delR(particles.at(i), particles.at(j));
                    double dR_js = delR(particles.at(j), particles.at(s));
                    double dR_is = delR(particles.at(s), particles.at(i));
                    
                    double R_L = -1;
                    if(dR_ij>dR_js && dR_ij>dR_is){R_L = dR_ij;}
                    else if(dR_js>dR_ij && dR_js>dR_is){R_L = dR_js;}
                    else{R_L = dR_is;}
                    
                    int i1 = particles.at(i).user_index();
                    int i2 = particles.at(j).user_index();
                    int i3 = particles.at(s).user_index();
                    
                    if(fCout){cout<<"ijs loop RL computed"<<endl;}
                    
                    if(type=="sameJet"){
                        
                        if(fCout){cout<<"fill same jet ijs"<<endl;}
                        
                        hJet_deltaR_MJ_e3c->Fill(jetpt, pt, R_L, w_ijs);
                        
                        h3Jet_deltaR_MJ_e3c->Fill(jetpt, R_L, w_ijs_3D);
                        h3Jet_deltaR_MJ_e3c->Fill(jetpt, R_L, w_ijs_3D);
                        h3Jet_deltaR_MJ_e3c->Fill(jetpt, R_L, w_ijs_3D);
                        h3Jet_deltaR_MJ_e3c->Fill(jetpt, R_L, w_ijs_3D);
                        h3Jet_deltaR_MJ_e3c->Fill(jetpt, R_L, w_ijs_3D);
                        h3Jet_deltaR_MJ_e3c->Fill(jetpt, R_L, w_ijs_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                hJet_deltaR_MJ_e3c_c_m->Fill(jetpt, pt, R_L, w_ijs);
                                hJet_deltaR_MJ_e3c_tru_c_m->Fill(jetpt, pt, R_L, w_ijs_tru);
                                
                                h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                
                                h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                
                            }
                            else{
                                hJet_deltaR_MJ_e3c_m->Fill(jetpt, pt, R_L, w_ijs);
                                hJet_deltaR_MJ_e3c_tru_m->Fill(jetpt, pt, R_L, w_ijs_tru);
                                
                                h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                
                                h3Jet_deltaR_MJ_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                h3Jet_deltaR_MJ_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                
                            }
                        }
                        else{
                            if(cfactor){
                                hJet_deltaR_MJ_e3c_c_um->Fill(jetpt, pt, R_L, w_ijs);
                                
                                h3Jet_deltaR_MJ_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                
                            }
                            else{
                                hJet_deltaR_MJ_e3c_um->Fill(jetpt, pt, R_L, w_ijs);
                                
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                            }
                        }
                        
                        if ((i1 == 0) && (i2 == 0) && (i3 ==0)){
                            hJet_deltaR_MJ0_e3c->Fill(jetpt, pt, R_L, w_ijs);
                            
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                            h3Jet_deltaR_MJ0_e3c->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                            
                            if(ifMatchedJet){
                                if(cfactor){
                                    hJet_deltaR_MJ0_e3c_c_m->Fill(jetpt, pt, R_L, w_ijs);
                                    hJet_deltaR_MJ0_e3c_tru_c_m->Fill(jetpt, pt, R_L, w_ijs_tru)
                                    
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                }
                                else{
                                    hJet_deltaR_MJ0_e3c_m->Fill(jetpt, pt, R_L, w_ijs);
                                    hJet_deltaR_MJ0_e3c_tru_m->Fill(jetpt, pt, R_L, w_ijs_tru)
                                    
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake fake
                                    
                                }
                            }
                            else{
                                if(cfactor){
                                    hJet_deltaR_MJ0_e3c_c_um->Fill(jetpt, pt, R_L, w_ijs);
                                    
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                }
                                else{
                                    hJet_deltaR_MJ0_e3c_um->Fill(jetpt, pt, R_L, w_ijs);
                                    
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    h3Jet_deltaR_MJ0_e3c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake fake
                                    
                                }
                            }
                            else if (((i1 == 0) && (i2 == 0) && (i3 != 0)) ||((i1 == 0) && (i2 != 0) && (i3 == 0)) ||((i1 != 0) && (i2 == 0) && (i3 == 0))){
                                
                                hJet_deltaR_MJ1_e3c->Fill(jetpt, pt, R_L, w_ijs);
                                
                                h3Jet_deltaR_MJ1_e3c->Fill(jetpt, R_L, w_ijs_3D);//fake fake REAL
                                h3Jet_deltaR_MJ1_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ1_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ1_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ1_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ1_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                
                                if(ifMatchedJet){
                                    if(cfactor){
                                        hJet_deltaR_MJ1_e3c_c_m->Fill(jetpt, pt, R_L, w_ijs);
                                        hJet_deltaR_MJ1_e3c_tru_c_m->Fill(jetpt, pt, R_L, w_ijs_tru)
                                        
                                        h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake REAL
                                        h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                        h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake REAL
                                        h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ1_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        
                                    }
                                    else{
                                        
                                        hJet_deltaR_MJ1_e3c_m->Fill(jetpt, pt, R_L, w_ijs);
                                        hJet_deltaR_MJ1_e3c_tru_m->Fill(jetpt, pt, R_L, w_ijs_tru)
                                        
                                        h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, R_L, w_ijs_3D);//fake fake REAL
                                        h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                        h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);//fake fake REAL
                                        h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ1_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        
                                    }
                                }
                                else{
                                    if(cfactor){
                                        hJet_deltaR_MJ1_e3c_c_um->Fill(jetpt, pt, R_L, w_ijs);
                                        
                                        h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake REAL
                                        h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                    }
                                    else{
                                        hJet_deltaR_MJ1_e3c_um->Fill(jetpt, pt, R_L, w_ijs);
                                        
                                        h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, R_L, w_ijs_3D);//fake fake REAL
                                        h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ1_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                    }
                                    
                                    
                                }
                            }
                            else if (((i1 == 0) && (i2 != 0) && (i3 != 0)) ||((i1 != 0) && (i2 != 0) && (i3 == 0)) ||((i1 != 0) && (i2 == 0) && (i3 != 0)))
                            {
                                hJet_deltaR_MJ2_e3c->Fill(jetpt, pt, R_L, w_ijs);
                                
                                h3Jet_deltaR_MJ2_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ2_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ2_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ2_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ2_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ2_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                
                                if(ifMatchedJet){
                                    if(cfactor){
                                        hJet_deltaR_MJ2_e3c_c_m->Fill(jetpt, pt, R_L, w_ijs);
                                        hJet_deltaR_MJ2_e3c_tru_c_m->Fill(jetpt, pt, R_L, w_ijs_tru);
                                        
                                        h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                        h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        
                                    }
                                    else{
                                        hJet_deltaR_MJ2_e3c_m->Fill(jetpt, pt, R_L, w_ijs);
                                        hJet_deltaR_MJ2_e3c_tru_m->Fill(jetpt, pt, R_L, w_ijs_tru);
                                        
                                        h3Jet_deltaR_MJ2_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                        h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ2_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        
                                    }
                                }
                                else{
                                    if(cfactor){
                                        hJet_deltaR_MJ2_e3c_c_um->Fill(jetpt, pt, R_L, w_ijs);
                                        
                                        h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    }
                                    else{
                                        hJet_deltaR_MJ2_e3c_um->Fill(jetpt, pt, R_L, w_ijs);
                                        
                                        h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ2_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    }
                                }
                                
                            }
                            else{
                                hJet_deltaR_MJ3_e3c->Fill(jetpt, pt, R_L, w_ijs);//real real real
                                
                                
                                h3Jet_deltaR_MJ3_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ3_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ3_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ3_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ3_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                h3Jet_deltaR_MJ3_e3c->Fill(jetpt, R_L, w_ijs_3D);
                                
                                if(ifMatchedJet){
                                    
                                    if(cfactor){
                                        
                                        hJet_deltaR_MJ3_e3c_c_m->Fill(jetpt, pt, R_L, w_ijs);//real real real
                                        hJet_deltaR_MJ3_e3c_tru_c_m->Fill(jetpt, pt, R_L, w_ijs_tru);
                                        
                                        h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                        h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        
                                    }
                                    else{
                                        hJet_deltaR_MJ3_e3c_m->Fill(jetpt, pt, R_L, w_ijs);//real real real
                                        hJet_deltaR_MJ3_e3c_tru_m->Fill(jetpt, pt, R_L, w_ijs_tru);
                                        
                                        h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_m->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                        h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        h3Jet_deltaR_MJ3_e3c_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                        
                                    }
                                }
                                else{
                                    if(cfactor){
                                        hJet_deltaR_MJ3_e3c_c_um->Fill(jetpt, pt, R_L, w_ijs);//real real real
                                        
                                        h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        
                                    }
                                    else{
                                        hJet_deltaR_MJ3_e3c_um->Fill(jetpt, pt, R_L, w_ijs);//real real real
                                        
                                        h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                        h3Jet_deltaR_MJ3_e3c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    }
                                }
                            }
                        }
                        
                        if(type=="sameMB"){
                            if(fCout){cout<<"same MB ijs loop"<<endl;}
                            h_MB1MB1MB1->Fill(jetpt, pt, R_L, w_ijs);
                            
                            h3_MB1MB1MB1->Fill(jetpt, R_L, w_ijs_3D);
                            h3_MB1MB1MB1->Fill(jetpt, R_L, w_ijs_3D);
                            h3_MB1MB1MB1->Fill(jetpt, R_L, w_ijs_3D);
                            h3_MB1MB1MB1->Fill(jetpt, R_L, w_ijs_3D);
                            h3_MB1MB1MB1->Fill(jetpt, R_L, w_ijs_3D);
                            h3_MB1MB1MB1->Fill(jetpt, R_L, w_ijs_3D);
                            
                            if(ifMatchedJet){
                                if(cfactor){
                                    h_MB1MB1MB1_c_m->Fill(jetpt, pt, R_L, w_ijs);
                                    h_MB1MB1MB1_tru_c_m->Fill(jetpt, pt, R_L, w_ijs_tru);
                                    
                                    h3_MB1MB1MB1_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_m->Fill(jetpt, R_L, w_ijs_3D);
                                    
                                    h3_MB1MB1MB1_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_c_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    
                                }
                                else{
                                    h_MB1MB1MB1_m->Fill(jetpt, pt, R_L, w_ijs);
                                    h_MB1MB1MB1_tru_m->Fill(jetpt, pt, R_L, w_ijs_tru);
                                    
                                    h3_MB1MB1MB1_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_m->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_m->Fill(jetpt, R_L, w_ijs_3D);
                                    
                                    h3_MB1MB1MB1_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                    h3_MB1MB1MB1_tru_m->Fill(pt, R_L, w_ijs_tru_3D);
                                }
                            }
                            else{
                                if(cfactor){
                                    h_MB1MB1MB1_c_um->Fill(jetpt, pt, R_L, w_ijs);
                                    
                                    h3_MB1MB1MB1_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_c_um->Fill(jetpt, R_L, w_ijs_3D);
                                    
                                }
                                else{
                                    h_MB1MB1MB1_um->Fill(jetpt, pt, R_L, w_ijs);
                                    
                                    h3_MB1MB1MB1_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_um->Fill(jetpt, R_L, w_ijs_3D);
                                    h3_MB1MB1MB1_um->Fill(jetpt, R_L, w_ijs_3D);
                                    
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if (typeSame == "two"){
        //particles2 and particles3 is the same list
        
        for (int i = 0; i < mult; i++)
        {
            if(particles.at(i).pt()<corrTrkCut) continue;
            int i1 = particles.at(i).user_index();
            
            for (int  j = 0; j < mult2; j++)
            {
                
                if(particles2.at(j).pt()<corrTrkCut) continue;
                
                int i2 = particles2.at(j).user_index();
                
                w_twosame = (1./(jetpt*jetpt*jetpt))*(3*particles.at(i).pt()*particles2.at(j).pt()*particles2.at(j).pt());
                w_twosame_tru = (1./(pt*pt*pt))*(particles.at(i).pt()*particles2.at(j).pt()*particles2.at(j).pt());
                
                w_twosame_3D = (1./(jetpt*jetpt*jetpt))*(particles.at(i).pt()*particles2.at(j).pt()*particles2.at(j).pt());
                w_twosame_tru_3D = (1./(jetpt*jetpt*jetpt))*(particles.at(i).pt()*particles2.at(j).pt()*particles2.at(j).pt());
                
                double R_L = delR(particles.at(i), particles2.at(j));
                
                if(fCout){cout<<" about to fill histograms in TWO SAME"<<endl;}
                if(i1==-2 && (i2 == 1 || i2 == 0)) {
                    
                    if(fCout){cout<<" filled jjmb TWO SAME"<<endl;}
                    
                    h_JJMB->Fill(jetpt, pt, R_L,w_twosame);
                    
                    h3_JJMB->Fill(jetpt, pt, R_L,w_twosame_3D);
                    h3_JJMB->Fill(jetpt, pt, R_L,w_twosame_3D);
                    h3_JJMB->Fill(jetpt, pt, R_L,w_twosame_3D);
                    
                    if(ifMatchedJet){
                        
                        if(cfactor){
                            h_JJMB_c_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_JJMB_tru_c_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_JJMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JJMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JJMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_JJMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_JJMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_JJMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            
                            
                        }
                        else{
                            h_JJMB_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_JJMB_tru_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_JJMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JJMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JJMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_JJMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_JJMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_JJMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                        }
                        
                    }
                    else{
                        if(cfactor){
                            h_JJMB_c_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_JJMB_c_um->Fill(jetpt, pt, R_L,w_twosame_3D);
                            h3_JJMB_c_um->Fill(jetpt, pt, R_L,w_twosame_3D);
                            h3_JJMB_c_um->Fill(jetpt, pt, R_L,w_twosame_3D);
                            
                        }
                        else{
                            h_JJMB_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_JJMB_um->Fill(jetpt, pt, R_L,w_twosame_3D);
                            h3_JJMB_um->Fill(jetpt, pt, R_L,w_twosame_3D);
                            h3_JJMB_um->Fill(jetpt, pt, R_L,w_twosame_3D);
                            
                        }
                    }
                }
                if(i1==-2 && i2 == 0 && i2 == 0){
                    if(fCout){cout<<" filled bbmb TWO SAME"<<endl;}
                    
                    h_BBMB->Fill(jetpt, pt, R_L,w_twosame);
                    
                    h3_BBMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_BBMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_BBMB->Fill(jetpt, R_L,w_twosame_3D);
                    
                    if(ifMatchedJet){
                        if(cfactor){
                            h_BBMB_c_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_BBMB_tru_c_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_BBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_BBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_BBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_BBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            
                        }
                        else{
                            h_BBMB_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_BBMB_tru_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_BBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_BBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_BBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_BBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                        }
                    }
                    else{
                        if(cfactor){
                            h_BBMB_c_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_BBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            
                        }
                        else{
                            h_BBMB_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_BBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                        }
                    }
                }
                if(i1==-2 && i2 == 1 && i2 == 1){
                    
                    if(fCout){cout<<" filled ssmb TWO SAME"<<endl;}
                    
                    h_SSMB->Fill(jetpt, pt, R_L,w_twosame);
                    
                    h3_SSMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_SSMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_SSMB->Fill(jetpt, R_L,w_twosame_3D);
                    
                    if(ifMatchedJet){
                        if(cfactor){
                            h_SSMB_c_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_SSMB_tru_c_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_SSMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SSMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SSMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_SSMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_SSMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_SSMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                        }
                        else{
                            h_SSMB_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_SSMB_tru_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_SSMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SSMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SSMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_SSMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_SSMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_SSMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            
                        }
                    }
                    else{
                        if(cfactor){
                            h_SSMB_c_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_SSMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SSMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SSMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            
                        }
                        else{
                            h_SSMB_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_SSMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SSMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SSMB_um->Fill(jetpt, R_L,w_twosame_3D);
                        }
                    }
                }
                
                if((i1== 0 || i1 == 1) && (i2 == -2)){
                    
                    if(fCout){cout<<" filled jmbmb TWO SAME"<<endl;}
                    
                    h_JMBMB->Fill(jetpt, pt, R_L,w_twosame);
                    
                    h3_JMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_JMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_JMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    
                    if(ifMatchedJet){
                        if(cfactor){
                            h_JMBMB_c_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_JMBMB_tru_c_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_JMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_JMBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_JMBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_JMBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            
                        }
                        else{
                            h_JMBMB_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_JMBMB_tru_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_JMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_JMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_JMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_JMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                        }
                    }
                    else{
                        if(cfactor){
                            h_JMBMB_c_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_JMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                        }
                        else{
                            h_JMBMB_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_JMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_JMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                        }
                    }
                }
                if((i1== 0)  && (i2 == -2) && (i2==-2)){
                    
                    if(fCout){cout<<" filled bmbmb TWO SAME"<<endl;}
                    
                    h_BMBMB->Fill(jetpt, pt, R_L,w_twosame);
                    
                    h3_BMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_BMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_BMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    
                    if(ifMatchedJet){
                        
                        if(cfactor){
                            h_BMBMB_c_m->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_BMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                        }
                        else{
                            h_BMBMB_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_BMBMB_tru_m->Fill(jetpt, pt, R_L,w_twosame_yri);
                            
                            h3_BMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_BMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_BMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_BMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                        }
                    }
                    else{
                        if(cfactor){
                            h_BMBMB_c_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_BMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                        }
                        else{
                            h_BMBMB_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_BMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_BMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            
                        }
                    }
                }
                if((i1 == 1) && (i2 == -2) && (i2==-2)){
                    
                    if(fCout){cout<<" filled smbmb TWO SAME"<<endl;}
                    
                    h_SMBMB->Fill(jetpt, pt, R_L,w_twosame);
                    
                    h3_SMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_SMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    h3_SMBMB->Fill(jetpt, R_L,w_twosame_3D);
                    
                    if(ifMatchedJet){
                        if(cfactor){
                            h_SMBMB_c_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_SMBMB_tru_c_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_SMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SMBMB_c_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_SMBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_SMBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_SMBMB_tru_c_m->Fill(pt, R_L,w_twosame_tru_3D);
                        }
                        else{
                            h_SMBMB_m->Fill(jetpt, pt, R_L,w_twosame);
                            h_SMBMB_tru_m->Fill(jetpt, pt, R_L,w_twosame_tru);
                            
                            h3_SMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SMBMB_m->Fill(jetpt, R_L,w_twosame_3D);
                            
                            h3_SMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_SMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                            h3_SMBMB_tru_m->Fill(pt, R_L,w_twosame_tru_3D);
                        }
                    }
                    else{
                        if(cfactor){
                            h_SMBMB_c_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_SMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SMBMB_c_um->Fill(jetpt, R_L,w_twosame_3D);
                            
                        }
                        else{
                            h_SMBMB_um->Fill(jetpt, pt, R_L,w_twosame);
                            
                            h3_SMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                            h3_SMBMB_um->Fill(jetpt, R_L,w_twosame_3D);
                        }
                    }
                }
                
                if(i1 == -3 && i2 == -2){
                    
                    if(fCout){cout<<" filled mb1mb1mb2 TWO SAME"<<endl;}
                    
                    h_MB1MB1MB2->Fill(jetpt, pt, R_L, w_twosame);
                    
                    h3_MB1MB1MB2->Fill(jetpt, R_L, w_twosame_3D);
                    h3_MB1MB1MB2->Fill(jetpt, R_L, w_twosame_3D);
                    h3_MB1MB1MB2->Fill(jetpt, R_L, w_twosame_3D);
                    
                    if(ifMatchedJet){
                        if(cfactor){
                            h_MB1MB1MB2_c_m->Fill(jetpt, pt, R_L, w_twosame);
                            h_MB1MB1MB2_tru_c_m->Fill(jetpt, pt, R_L, w_twosame_tru);
                            
                            h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_twosame_3D);
                            
                            h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_twosame_tru_3D);
                            h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_twosame_tru_3D);
                            h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_twosame_tru_3D);
                            
                        }
                        else{
                            h_MB1MB1MB2_m->Fill(jetpt, pt, R_L, w_twosame);
                            h_MB1MB1MB2_tru_m->Fill(jetpt, pt, R_L, w_twosame_tru);
                            
                            h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_twosame_3D);
                            
                            h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_twosame_tru_3D);
                            h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_twosame_tru_3D);
                            h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_twosame_tru_3D);
                        }
                    }
                    else{
                        if(cfactor){
                            h_MB1MB1MB2_c_um->Fill(jetpt, pt, R_L, w_twosame);
                            
                            h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_twosame_3D);
                            
                        }
                        else{
                            h_MB1MB1MB2_um->Fill(jetpt, pt, R_L, w_twosame);
                            
                            h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_twosame_3D);
                        }
                    }
                }
                if(i1 == -2 && i2 == -3){
                    
                    if(fCout){cout<<" filled mb1mb2mb2 TWO SAME"<<endl;}
                    
                    h_MB1MB2MB2->Fill(jetpt, pt, R_L, w_twosame);
                    
                    h3_MB1MB2MB2->Fill(jetpt, R_L, w_twosame_3D);
                    h3_MB1MB2MB2->Fill(jetpt, R_L, w_twosame_3D);
                    h3_MB1MB2MB2->Fill(jetpt, R_L, w_twosame_3D);
                    
                    if(ifMatchedJet){
                        
                        if(cfactor){
                            h_MB1MB2MB2_c_m->Fill(jetpt, pt, R_L, w_twosame);
                            h_MB1MB2MB2_tru_c_m->Fill(jetpt, pt, R_L, w_twosame_tru);
                            
                            h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_twosame_3D);
                            
                            h3_MB1MB2MB2_tru_c_m->Fill(jetpt, R_L, w_twosame_tru_3D);
                            h3_MB1MB2MB2_tru_c_m->Fill(jetpt, R_L, w_twosame_tru_3D);
                            h3_MB1MB2MB2_tru_c_m->Fill(jetpt, R_L, w_twosame_tru_3D);
                        }
                        else{
                            h_MB1MB2MB2_m->Fill(jetpt, pt, R_L, w_twosame);
                            h_MB1MB2MB2_tru_m->Fill(jetpt, pt, R_L, w_twosame_tru);
                            
                            h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_twosame_3D);
                            
                            h3_MB1MB2MB2_tru_m->Fill(jetpt, R_L, w_twosame_tru_3D);
                            h3_MB1MB2MB2_tru_m->Fill(jetpt, R_L, w_twosame_tru_3D);
                            h3_MB1MB2MB2_tru_m->Fill(jetpt, R_L, w_twosame_tru_3D);
                        }
                    }
                    else{
                        if(cfactor){
                            h_MB1MB2MB2_c_um->Fill(jetpt, pt, R_L, w_twosame);
                            
                            h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_twosame_3D);
                            
                        }
                        else{
                            h_MB1MB2MB2_um->Fill(jetpt, pt, R_L, w_twosame);
                            
                            h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_twosame_3D);
                            h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_twosame_3D);
                        }
                    }
                }
                
                if(fCout){cout<<" filled j loop in TWO SAME"<<endl;}
                
                for (int k = j+1; k < mult2; k++)
                {
                    if(particles2.at(k).pt()<corrTrkCut) continue;
                    int i3 = particles2.at(k).user_index();
                    
                    
                    w_ijk = (1./(jetpt*jetpt*jetpt))*(6*particles.at(i).pt()*particles2.at(j).pt()*particles2.at(k).pt());
                    w_ijk_tru = (1./(pt*pt*pt))*(6*particles.at(i).pt()*particles2.at(j).pt()*particles2.at(k).pt());
                    
                    w_ijk_3D = (1./(jetpt*jetpt*jetpt))*(particles.at(i).pt()*particles2.at(j).pt()*particles2.at(k).pt());
                    w_ijk_tru_3D = (1./(pt*pt*pt))*(particles.at(i).pt()*particles2.at(j).pt()*particles2.at(k).pt());
                    
                    
                    
                    double dR_ij = delR(particles.at(i), particles2.at(j));
                    double dR_js = delR(particles2.at(j), particles2.at(k));
                    double dR_is = delR(particles2.at(k), particles.at(i));
                    
                    double R_L = -1;
                    if(dR_ij>dR_js && dR_ij>dR_is){R_L = dR_ij;}
                    else if(dR_js>dR_ij && dR_js>dR_is){R_L = dR_js;}
                    else{R_L = dR_is;}
                    
                    
                    if(i1==-2 && (i2 == 1 || i2 == 0) && (i3 == 1 || i3 == 0)) {
                        
                        if(fCout){cout<<" filled jjmb two same "<<endl;}
                        h_JJMB->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_JJMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JJMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JJMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JJMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JJMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JJMB->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_JJMB_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_JJMB_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_JJMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_JJMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_JJMB_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_JJMB_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_JJMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_JJMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_JJMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_JJMB_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_JJMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                            else{
                                h_JJMB_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_JJMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JJMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                        }
                    }
                    if(i1==-2 && i2 == 0 && i3 == 0){
                        if(fCout){cout<<" filled bbmb two same "<<endl;}
                        
                        h_BBMB->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_BBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BBMB->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_BBMB_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_BBMB_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_BBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_BBMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_c_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_BBMB_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_BBMB_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_BBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_BBMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                                h3_BBMB_tru_m->Fill(jetpt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_BBMB_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_BBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                            else{
                                h_BBMB_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_BBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                            }
                        }
                    }
                    if(i1==-2 && i2 == 1 && i3 == 1){
                        
                        if(fCout){cout<<" filled ssmb two same "<<endl;}
                        
                        h_SSMB->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_SSMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SSMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SSMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SSMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SSMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SSMB->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_SSMB_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_SSMB_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_SSMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_SSMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_SSMB_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_SSMB_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_SSMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_SSMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SSMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_SSMB_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_SSMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                            }
                            else{
                                h_SSMB_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_SSMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SSMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                        }
                    }
                    if(i1==-2 && ((i2 == 0 && i3 == 1)||(i2 == 1 && i3 == 0))) {
                        
                        if(fCout){cout<<" filled sbmb two same "<<endl;}
                        h_SBMB->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_SBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SBMB->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            
                            h_SBMB_m->Fill(jetpt, pt, R_L,w_ijk);
                            h_SBMB_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                            
                            h3_SBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                            h3_SBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                            h3_SBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                            h3_SBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                            h3_SBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                            h3_SBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                            
                            h3_SBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            h3_SBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            h3_SBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            h3_SBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            h3_SBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            h3_SBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            
                        }
                        else{
                            if(cfactor){
                                h_SBMB_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_SBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                            else{
                                h_SBMB_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_SBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                            }
                        }
                    }
                    if((i1== 0 || i1 == 1) && (i2 == -2) && (i3==-2)) {
                        
                        if(fCout){cout<<" filled jmbmb two same "<<endl;}
                        h_JMBMB->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_JMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_JMBMB_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_JMBMB_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_JMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_JMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_JMBMB_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_JMBMB_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_JMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_JMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_JMBMB_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_JMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                            else{
                                h_JMBMB_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_JMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                        }
                    }
                    if((i1== 0)  && (i2 == -2) && (i3== -2)){
                        
                        if(fCout){cout<<" filled bmbmb two same "<<endl;}
                        h_BMBMB->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_BMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_BMBMB_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_BMBMB_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_BMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_BMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_BMBMB_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_BMBMB_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_BMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_BMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_BMBMB_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_BMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                            }
                            else{
                                h_BMBMB_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_BMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                            
                        }
                    }
                    if((i1 == 1) && (i2 == -2) && (i3==-2)){
                        
                        if(fCout){cout<<" filled smbmb two same "<<endl;}
                        
                        h_SMBMB->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_SMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMBMB->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_SMBMB_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_SMBMB_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_SMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_SMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_SMBMB_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_SMBMB_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_SMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_SMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMBMB_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_SMBMB_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_SMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_c_um->Fill(jetpt, R_L,w_ijk_3D);
                            }
                            else{
                                h_SMBMB_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_SMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMBMB_um->Fill(jetpt, R_L,w_ijk_3D);
                            }
                        }
                    }
                    
                    if(i1 == -3 && i2 == -2 && i3 == -2){
                        
                        if(fCout){cout<<" filled mb1mb1mb2 two same "<<endl;}
                        
                        h_MB1MB1MB2->Fill(jetpt, pt, R_L, w_ijk);
                        
                        h3_MB1MB1MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB1MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB1MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB1MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB1MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB1MB2->Fill(jetpt, R_L, w_ijk_3D);
                        if(ifMatchedJet){
                            if(cfactor){
                                h_MB1MB1MB2_c_m->Fill(jetpt, pt, R_L, w_ijk);
                                h_MB1MB1MB2_tru_c_m->Fill(jetpt, pt, R_L, w_ijk_tru);
                                
                                h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                
                                h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                            }
                            else{
                                h_MB1MB1MB2_m->Fill(jetpt, pt, R_L, w_ijk);
                                h_MB1MB1MB2_tru_m->Fill(jetpt, pt, R_L, w_ijk_tru);
                                
                                h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                
                                h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB1MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                
                            }
                        }
                        else{
                            if(cfactor){
                                h_MB1MB1MB2_c_um->Fill(jetpt, pt, R_L, w_ijk);
                                
                                h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                
                            }
                            else{
                                h_MB1MB1MB2_um->Fill(jetpt, pt, R_L, w_ijk);
                                
                                h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB1MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                
                            }
                            
                        }
                    }
                    if(i1 == -2 && i2 == -3 && i3 == -3){
                        if(fCout){cout<<" filled mb1mb2mb2 two same "<<endl;}
                        
                        h_MB1MB2MB2->Fill(jetpt, pt, R_L, w_ijk);
                        
                        h3_MB1MB2MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB2MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB2MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB2MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB2MB2->Fill(jetpt, R_L, w_ijk_3D);
                        h3_MB1MB2MB2->Fill(jetpt, R_L, w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_MB1MB2MB2_c_m->Fill(jetpt, pt, R_L, w_ijk);
                                h_MB1MB2MB2_tru_c_m->Fill(jetpt, pt, R_L, w_ijk_tru);
                                
                                h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_m->Fill(jetpt, R_L, w_ijk_3D);
                                
                                h3_MB1MB2MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_c_m->Fill(pt, R_L, w_ijk_tru_3D);
                            }
                            else{
                                h_MB1MB2MB2_m->Fill(jetpt, pt, R_L, w_ijk);
                                h_MB1MB2MB2_tru_m->Fill(jetpt, pt, R_L, w_ijk_tru);
                                
                                h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_m->Fill(jetpt, R_L, w_ijk_3D);
                                
                                h3_MB1MB2MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                h3_MB1MB2MB2_tru_m->Fill(pt, R_L, w_ijk_tru_3D);
                                
                            }
                            
                        }
                        else{
                            if(cfactor){
                                h_MB1MB2MB2_c_um->Fill(jetpt, pt, R_L, w_ijk);
                                
                                h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_c_um->Fill(jetpt, R_L, w_ijk_3D);
                            }
                            else{
                                h_MB1MB2MB2_um->Fill(jetpt, pt, R_L, w_ijk);
                                
                                h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                h3_MB1MB2MB2_um->Fill(jetpt, R_L, w_ijk_3D);
                                
                            }
                            
                        }
                        
                    }
                }
            }
        }
    }
    else{
        if(fCout){cout<<" all diff now "<<endl;}
        for (int i = 0; i < mult; i++)
        {
            if(particles.at(i).pt()<corrTrkCut) continue;
            int i1 = particles.at(i).user_index();
            
            for (int  j = 0; j < mult2; j++)
            {
                if(particles2.at(j).pt()<corrTrkCut) continue;
                int i2 = particles2.at(j).user_index();
                
                for (int k = 0; k < mult3; k++)
                {
                    if(particles3.at(k).pt()<corrTrkCut) continue;
                    int i3 = particles3.at(k).user_index();
                    
                    w_ijk = (1./(jetpt*jetpt*jetpt))*(6*particles.at(i).pt()*particles2.at(j).pt()*particles3.at(k).pt());
                    w_ijk_tru = (1./(pt*pt*pt))*(particles.at(i).pt()*particles2.at(j).pt()*particles3.at(k).pt());
                    
                    w_ijk_3D = (1./(jetpt*jetpt*jetpt))*(particles.at(i).pt()*particles2.at(j).pt()*particles3.at(k).pt());
                    w_ijk_tru_3D = (1./(pt*pt*pt))*(particles.at(i).pt()*particles2.at(j).pt()*particles3.at(k).pt());
                    
                    double dR_ij = delR(particles.at(i), particles2.at(j));
                    double dR_js = delR(particles2.at(j), particles3.at(k));
                    double dR_is = delR(particles.at(i), particles3.at(k));
                    
                    double R_L = -1;
                    if(dR_ij>dR_js && dR_ij>dR_is){R_L = dR_ij;}
                    else if(dR_js>dR_ij && dR_js>dR_is){R_L = dR_js;}
                    else{R_L = dR_is;}
                    
                    if((i1 == 1 || i1 == 0) && i2==-2 && i3 == -3){
                        if(fCout){cout<<" jmb1mb2 "<<endl;}
                        
                        h_JMB1MB2->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_JMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_JMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_JMB1MB2_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_JMB1MB2_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_JMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_JMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_JMB1MB2_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_JMB1MB2_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_JMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_JMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_JMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_JMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_JMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_JMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                
                            }
                            else{
                                h_JMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_JMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                h3_JMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk_3D);
                                
                            }
                        }
                    }
                    if(i1 == 0 && i2==-2 && i3 == -3){
                        
                        if(fCout){cout<<" jbmb1mb2 "<<endl;}
                        
                        h_BMB1MB2->Fill(jetpt, pt, R_L,w_ijk);
                        h_BMB1MB2_tru->Fill(jetpt, pt, R_L,w_ijk_tru);
                        
                        h3_BMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_BMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_BMB1MB2_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_BMB1MB2_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_BMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_BMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_BMB1MB2_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_BMB1MB2_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_BMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_BMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_BMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_BMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_BMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                                
                            }
                            else{
                                h_BMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_BMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_BMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                        }
                    }
                    if(i1 == 1 && i2==-2 && i3 == -3){
                        
                        if(fCout){cout<<" sbmb1mb2 "<<endl;}
                        
                        h_SMB1MB2->Fill(jetpt, pt, R_L,w_ijk);
                        
                        h3_SMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        h3_SMB1MB2->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_SMB1MB2_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_SMB1MB2_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_SMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_SMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_SMB1MB2_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_SMB1MB2_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_SMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_SMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_SMB1MB2_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_SMB1MB2_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_SMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                                
                            }
                            else{
                                h_SMB1MB2_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_SMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_SMB1MB2_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                        }
                    }
                    
                    if(i1 == -2 && i2==-3 && i3 == -4){
                        
                        if(fCout){cout<<" mb1mb2mb3 "<<endl;}
                        
                        h_MB1MB2MB3->Fill(jetpt, pt, R_L,w_ijk);
                        h_MB1MB2MB3_tru->Fill(jetpt, pt, R_L,w_ijk_tru);
                        
                        h3_MB1MB2MB3->Fill(jetpt, R_L,w_ijk_3D);
                        h3_MB1MB2MB3->Fill(jetpt, R_L,w_ijk_3D);
                        h3_MB1MB2MB3->Fill(jetpt, R_L,w_ijk_3D);
                        h3_MB1MB2MB3->Fill(jetpt, R_L,w_ijk_3D);
                        h3_MB1MB2MB3->Fill(jetpt, R_L,w_ijk_3D);
                        h3_MB1MB2MB3->Fill(jetpt, R_L,w_ijk_3D);
                        
                        if(ifMatchedJet){
                            if(cfactor){
                                h_MB1MB2MB3_c_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_MB1MB2MB3_tru_c_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_MB1MB2MB3_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_MB1MB2MB3_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_c_m->Fill(pt, R_L,w_ijk_tru_3D);
                                
                            }
                            else{
                                h_MB1MB2MB3_m->Fill(jetpt, pt, R_L,w_ijk);
                                h_MB1MB2MB3_tru_m->Fill(jetpt, pt, R_L,w_ijk_tru);
                                
                                h3_MB1MB2MB3_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_m->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_m->Fill(jetpt, R_L,w_ijk_3D);
                                
                                h3_MB1MB2MB3_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                                h3_MB1MB2MB3_tru_m->Fill(pt, R_L,w_ijk_tru_3D);
                            }
                        }
                        else{
                            if(cfactor){
                                h_MB1MB2MB3_c_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_MB1MB2MB3_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_c_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                                
                            }
                            else{
                                h_MB1MB2MB3_um->Fill(jetpt, pt, R_L,w_ijk);
                                
                                h3_MB1MB2MB3_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_um->Fill(jetpt, R_L,w_ijk_3D);
                                h3_MB1MB2MB3_um->Fill(jetpt, R_L,w_ijk_3D);
                                
                            }
                        }
                    }
                }
            }
        }
    }
}
// //______________________________________________________________________
std::tuple<std::vector<fastjet::PseudoJet>, std::vector<fastjet::PseudoJet>, std::vector<fastjet::PseudoJet>>
AliAnalysisTaskJetsEECpbpb::FindMultipleThermalCones(
    AliEmcalJet *fJetEmb, AliJetContainer *fJetContEmb, double ptSub,
    AliEmcalJet *fJet, AliJetContainer *fJet_detCont,
    AliEmcalJet *fJet_tru, AliJetContainer *fJet_truCont) 
{
    std::vector<fastjet::PseudoJet> coneParticles1, coneParticles2, coneParticles3; // Separate vectors for each cone

    // Jet kinematics
    Float_t jet_embphi = fJetEmb->Phi();
    Float_t jet_embeta = fJetEmb->Eta();

    // Anti-jet location (π - jet_embphi)
    Float_t anti_jet_phi = jet_embphi + TMath::Pi();
    if (anti_jet_phi > TMath::TwoPi()) anti_jet_phi -= TMath::TwoPi();

    Double_t Axis1_Perp, Axis2_Shifted, Axis3_Offset;
    Double_t dPhi1, dPhi2, dPhi3, dEta1, dEta2, dEta3;
    Double_t fEtaMC;
    fastjet::PseudoJet PseudoTracks;

    // **Cone 1: Perpendicular to jet axis (π/2 shift)**
    Axis1_Perp = jet_embphi + (TMath::Pi() / 2.);
    if (Axis1_Perp > TMath::TwoPi()) Axis1_Perp -= TMath::TwoPi();

    // Ensure Cone 1 does not overlap with anti-jet
    if (TMath::Abs(Axis1_Perp - anti_jet_phi) < fConeR) {
        Axis1_Perp += fConeR;
        if (Axis1_Perp > TMath::TwoPi()) Axis1_Perp -= TMath::TwoPi();
    }

    // **Cone 2: Shift φ by 0.6 radians and reflect in η**
    Axis2_Shifted = jet_embphi + 0.6;
    if (Axis2_Shifted > TMath::TwoPi()) Axis2_Shifted -= TMath::TwoPi();
    Float_t eta_reflected = -jet_embeta; // Reflect in eta

    // Ensure Cone 2 does not overlap with Jet or Anti-Jet
    if (TMath::Sqrt((jet_embphi - Axis2_Shifted) * (jet_embphi - Axis2_Shifted) +
                    (jet_embeta - eta_reflected) * (jet_embeta - eta_reflected)) < fConeR ||
        TMath::Sqrt((anti_jet_phi - Axis2_Shifted) * (anti_jet_phi - Axis2_Shifted)) < fConeR) {
        Axis2_Shifted += fConeR;
        if (Axis2_Shifted > TMath::TwoPi()) Axis2_Shifted -= TMath::TwoPi();
    }

    // **Cone 3: 0.6 away from Cone 2, same η as the jet**
    Axis3_Offset = Axis2_Shifted + 0.6;
    if (Axis3_Offset > TMath::TwoPi()) Axis3_Offset -= TMath::TwoPi();

    // Ensure Cone 3 does not overlap with Cone 1, Cone 2, or Anti-Jet
    if (TMath::Sqrt((Axis3_Offset - Axis1_Perp) * (Axis3_Offset - Axis1_Perp) +
                    (jet_embeta - eta_reflected) * (jet_embeta - eta_reflected)) < fConeR ||
        TMath::Sqrt((Axis3_Offset - Axis2_Shifted) * (Axis3_Offset - Axis2_Shifted)) < fConeR ||
        TMath::Sqrt((Axis3_Offset - anti_jet_phi) * (Axis3_Offset - anti_jet_phi)) < fConeR) {
        Axis3_Offset += fConeR;
        if (Axis3_Offset > TMath::TwoPi()) Axis3_Offset -= TMath::TwoPi();
    }

    AliParticleContainer *partCont = 0;
    TIter nextPartCont(&fParticleCollArray);
    while ((partCont = static_cast<AliParticleContainer *>(nextPartCont()))) {
        AliParticleIterableMomentumContainer itcont = partCont->accepted_momentum();
        for (AliParticleIterableMomentumContainer::iterator it = itcont.begin(); it != itcont.end(); it++) {
            AliVTrack *particle = static_cast<AliVTrack *>(it->second);
            AliAODTrack *trackReal = (AliAODTrack *)(particle);

            if (!trackReal) continue;

            fEtaMC = trackReal->Eta();
            if (TMath::Abs(fEtaMC) > fEtaCutValue) continue;
            if (trackReal->Pt() < fMinENCtrackPt) continue;

            Float_t mod_track_phi = trackReal->Phi() + TMath::Pi();

            // Calculate distances to cones
            dPhi1 = TMath::Abs(mod_track_phi - Axis1_Perp);
            dPhi1 = (dPhi1 > TMath::Pi()) ? 2 * TMath::Pi() - dPhi1 : dPhi1;
            dEta1 = jet_embeta - trackReal->Eta();
            double distanceCone1 = TMath::Sqrt(dPhi1 * dPhi1 + dEta1 * dEta1);

            dPhi2 = TMath::Abs(mod_track_phi - Axis2_Shifted);
            dPhi2 = (dPhi2 > TMath::Pi()) ? 2 * TMath::Pi() - dPhi2 : dPhi2;
            dEta2 = eta_reflected - trackReal->Eta();
            double distanceCone2 = TMath::Sqrt(dPhi2 * dPhi2 + dEta2 * dEta2);

            dPhi3 = TMath::Abs(mod_track_phi - Axis3_Offset);
            dPhi3 = (dPhi3 > TMath::Pi()) ? 2 * TMath::Pi() - dPhi3 : dPhi3;
            dEta3 = jet_embeta - trackReal->Eta();
            double distanceCone3 = TMath::Sqrt(dPhi3 * dPhi3 + dEta3 * dEta3);

            // Check if the track is within any of the cones
            if (distanceCone1 < fConeR) {
                PseudoTracks.reset(trackReal->Px(), trackReal->Py(), trackReal->Pz(), trackReal->E());
                coneParticles1.push_back(PseudoTracks);
            }
            if (distanceCone2 < fConeR) {
                PseudoTracks.reset(trackReal->Px(), trackReal->Py(), trackReal->Pz(), trackReal->E());
                coneParticles2.push_back(PseudoTracks);
            }
            if (distanceCone3 < fConeR) {
                PseudoTracks.reset(trackReal->Px(), trackReal->Py(), trackReal->Pz(), trackReal->E());
                coneParticles3.push_back(PseudoTracks);
            }
        }
    }
    return std::make_tuple(coneParticles1, coneParticles2, coneParticles3);
}

//This is how to use them
std::vector<fastjet::PseudoJet> cone1, cone2, cone3;
std::tie(cone1, cone2, cone3) = FindMultipleRandomCones(fJetEmb, fJetContEmb, ptSub, fJet, fJet_detCont, fJet_tru, fJet_truCont);
// Now use them as inputs to ComputeE3C
ComputeE3C(cone1, cone2, cone3, jetpt, pt, "someTypeSame", "someType", true);
