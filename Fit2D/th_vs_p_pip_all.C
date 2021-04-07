
double thmax(double *x, double *par) {
   double s,y;
  s= 222.947-505.444*x[0] + 534.834*x[0]*x[0]-223.395*x[0]*x[0]*x[0];
   return s;
}


double th_s1_up1(double *x, double *par) {
   double s;

 s=(304.23*(x[0]+0.15)*(x[0]+0.15)*(x[0]+0.15) -255.798*(x[0]+0.15)*(x[0]+0.15)+497.462*(x[0]+0.15) +38.0385)*exp(-1.85*(x[0]+0.15)) +5.5;
   
   return s;
}

double th_s1_down1(double *x, double *par) {
   double s;

 s=(304.23*(x[0]+0.15)*(x[0]+0.15)*(x[0]+0.15) -255.798*(x[0]+0.15)*(x[0]+0.15)+497.462*(x[0]+0.15) +38.0385)*exp(-1.85*(x[0]+0.15)) -3;
   
   return s;
}

double th_s1_down2(double *x, double *par) {
   double s;

 s=(pow((x[0]-0.103718),(0.0703664))*252.822-133.024)*exp(-0.5*x[0])+0.1;
   
   return s;
}

double th_s1_up2(double *x, double *par) {
   double s;

 s=(pow((x[0]-0.0575818),( 0.075643))*238.248-115.039)*exp(-0.5*x[0])-0.1;
   
   return s;
}

double th_s1_up3(double *x, double *par) {
   double s,y;

y=x[0]+0.25;

 s=(304.23*y*y*y -255.798*y*y+497.462*y +38.0385)*exp(-1.6*y)-104;
   
   return s;
}
double th_s1_down3(double *x, double *par) {
   double s,y;

y=x[0]-0.12;

 s=(304.23*y*y*y -255.798*y*y+497.462*y +38.0385)*exp(-1.6*y)-103;
   
   return s;
}
///-----------------------


double th_s2_up1(double *x, double *par) {
   double s;

 s=pow((x[0]-0.415068),(0.226449))*48.7564 + 2.79478-1.;
   
   return s;
}

double th_s2_down1(double *x, double *par) {
   double s;

 s=pow((x[0]-0.449975),( 0.315164 ))*36.608 +  9.74262-1.;
   
   return s;
}

double th_s2_up2(double *x, double *par) {
   double s;

 s=(387.289*x[0]*x[0]*x[0] -758.466*x[0]*x[0]+ 842.881*x[0]-299.953+15.)*exp(-2*x[0]);
   
   return s;
}

double th_s2_down2(double *x, double *par) {
   double s,y;
y=x[0]+0.03;


 s=(387.289*y*y*y -758.466*y*y+ 842.881*y-299.953-15.)*exp(-2*y)-1.5;
   return s;
}
//---------------------------------

double th_s3_up1(double *x, double *par) {
   double s;

 s=(10000*x[0]*x[0]*x[0]-3607.41*x[0]*x[0]+ 1725.72*x[0]-10.6776)*exp(-4.7*x[0]);
   
   return s;
}

double th_s3_down1(double *x, double *par) {
   double s;

 s=(10000*x[0]*x[0]*x[0]-4505.62*x[0]*x[0]+  2056.24  *x[0] -77.4077 +5.)*exp(-4.7*x[0]);
   
   return s;
}

double th_s3_up2(double *x, double *par) {
   double s;

 s=pow((x[0]-0.416536),(0.108376))*67.4593-21.4374;
 
   return s;
}

double th_s3_down2(double *x, double *par) {
   double s;

 s=pow((x[0] -0.454898),( 0.289291))* 35.7267+6.65908+1.5;
   
   return s;
}
//-----------------------------------

double th_s4_up1(double *x, double *par) {
   double s,y;

y=x[0]+0.165;

 s=(304.23*y*y*y -255.798*y*y+497.462*y +38.0385)*exp(-1.85*y) +5.;
   
   return s;
}

double th_s4_down1(double *x, double *par) {
   double s;

 s=(304.23*(x[0]+0.18)*(x[0]+0.18)*(x[0]+0.18) -255.798*(x[0]+0.18)*(x[0]+0.18)+497.462*(x[0]+0.18) +38.0385)*exp(-1.85*(x[0]+0.18)) - 1.;
   
   return s;
}

double th_s4_up2(double *x, double *par) {
   double s;

 s=(1600*(x[0]+0.03)*(x[0]+0.03)*(x[0]+0.03) -1068.36*(x[0]+0.03)*(x[0]+0.03)+ 775.016*(x[0]+0.03)-1.13034)*exp(-2.75*(x[0]+0.03));
   
   return s;
}

double th_s4_down2(double *x, double *par) {
   double s;

 s=(pow((x[0]-0.103718),(0.0703664))*252.822-133.024)*exp(-0.45*x[0])-7.;
   
   return s;
}
//---------------------------------
double th_s5_up1(double *x, double *par) {
   double s;

 s=(525.498*(x[0]+0.03)*(x[0]+0.03)*(x[0]+0.03) -1284.98*(x[0]+0.03)*(x[0]+0.03)+1460.67*(x[0]+0.03)-499.999)*exp(-1.94*(x[0]+0.03));
   
   return s;
}

double th_s5_down1(double *x, double *par) {
   double s;

 s=(525.498*(x[0]-0.02)*(x[0]-0.02)*(x[0]-0.02) -1284.98*(x[0]-0.02)*(x[0]-0.02)+1460.67*(x[0]-0.02)-499.999)*exp(-1.94*(x[0]-0.02)) -4.7;
   
   return s;
}


double th_s5_up2(double *x, double *par) {
   double s;

 s=(304.23*(x[0])*(x[0])*(x[0]) -255.798*(x[0])*(x[0])+497.462*(x[0]) +38.0385)*exp(-1.85*(x[0]));
   
   return s;
}

double th_s5_down2(double *x, double *par) {
   double s;

 s=(304.23*(x[0]+0.03)*(x[0]+0.03)*(x[0]+0.03) -255.798*(x[0]+0.03)*(x[0]+0.03)+497.462*(x[0]+0.03) +38.0385)*exp(-1.85*(x[0]+0.03)) -11.;
   
   return s;
}

double th_s5_up3(double *x, double *par) {
   double s;
 s=pow((x[0]-0.304992),(0.0758186))*91.5643-48.2057 - 1.;
  return s;
}

double th_s5_down3(double *x, double *par) {
   double s;

 s=pow((x[0] -0.36848),( 0.0864219))*70.4769  -34.9998+ 1.5;
   
   return s;
}
//-----------------------------------------------

double th_s6_up1(double *x, double *par) {
   double s;
 s=pow((x[0]-0.05-0.0942469),( 0.0582707))*114.358-50 -0.5;
  return s;
}

double th_s6_down1(double *x, double *par) {
   double s;
 s=pow((x[0]-0.05-0.126994),( 0.0706829))* 110.073-50+2.;
  return s;
}

double th_s6_down2(double *x, double *par) {
   double s;
 s=pow((x[0] -0.454098),(0.0912936))*58.2946-20.4843+1.5;
  return s;
}

double th_s6_up2(double *x, double *par) {
   double s;
 s=pow((x[0]-0.416536),(0.108376))*67.4593-21.4374-1.;
  return s;
}




void th_vs_p_pip_all(){
gStyle->SetPalette(1);
gStyle ->SetOptLogz(1);
gStyle ->SetOptStat(0);
gStyle->SetTitleX(0.56);
gStyle->SetTitleSize(0.065,"t");
TCanvas *c = new TCanvas("c","c",0,0,500,700);
c -> Divide (3,4);
TCanvas *c2 = new TCanvas("c2","c2",0,0,1200,1000);
c2 -> Divide (2,1);
ostringstream qqq;
Short_t pad_n;

TFile *MyFile1 = new TFile("out_data_23mar17_pip_th_vs_p.root","READ");

//TFile *MyFile1 = new TFile("out_data_23mar17_pr_th_vs_p.root","READ");
//TFile *MyFile1 = new TFile("out_data_17mar17_pim_fid_new_hists2.root","READ");
//TFile *MyFile1 = new TFile("out_data_15mar17_th_vs_p_hists2.root","READ");
//TFile *MyFile2 = new TFile("out_test_19feb17.root","READ");

//this is the good sim file
//TFile *MyFile2 = new TFile("out_sim_27mar17_all_hadr_bef_cut.root","READ");

//TFile *MyFile1 = new TFile("out_test_19feb17_pip_cuts_check.root","READ");
TFile *MyFile2 = new TFile("out_test_19feb17_pip_cuts_check.root","READ");

TH2F *h_data_2,*h_data_5, *h_sim_2, *h_sim_5;

MyFile1->cd();

for (Short_t i=0;i<6;i++){
qqq.str("");
qqq << "th_vs_p/th_vs_p_pip_2_" << i+1;
gDirectory->GetObject(qqq.str().c_str(),h_data_2);
if (i<3) pad_n = i+1;
if (i>=3)pad_n = 4+i;
c->cd(pad_n);
c->cd(pad_n)->SetBottomMargin(0.15);
c->cd(pad_n)->SetLeftMargin(0.15);
h_data_2->GetXaxis()->SetLabelSize(0.05);
h_data_2->GetXaxis()->SetNdivisions(8+200);
h_data_2->GetYaxis()->SetLabelSize(0.05);
h_data_2->GetYaxis()->SetNdivisions(8+200);
h_data_2->GetXaxis()->SetTitle("P_{p'} (GeV)");
h_data_2->GetYaxis()->SetTitle("#theta_{p'} (deg)");
h_data_2->GetXaxis()->SetTitleSize(0.06);
h_data_2->GetYaxis()->SetTitleSize(0.06);
qqq.str("");
qqq << "Sector " << i+1<<" ,data";
h_data_2->SetTitle(qqq.str().c_str());
h_data_2->GetYaxis()->SetRangeUser(10.,130.);
h_data_2->GetXaxis()->SetRangeUser(0.05,1.8);
h_data_2->Draw("colz");

 TLine *line_l1 = new TLine(0.05,12,1.5,12);
line_l1->SetLineColor(kBlue);
line_l1->SetLineWidth(2);
line_l1->Draw("same");  

 TLine *line_l2 = new TLine(0.05,120,0.8,120);
line_l2->SetLineColor(kBlue);
line_l2->SetLineWidth(2);
line_l2->Draw("same");  

TF1 *fmax = new TF1("fmax",thmax, 0.2,1.7,0);

  fmax->SetLineColor(kBlue);
  fmax->SetLineWidth(2);
  fmax->Draw("same");  
 TF1 *f3q,  *f3w,*f3e, *f3r, *f3t, *f3y;  
//sector 1 data
if (i==0){

 f3q = new TF1("f3q",th_s1_up1, 0.05,0.5,0);

 f3q->SetLineColor(kBlack);
 f3q->SetLineWidth(2);
 f3q->Draw("same"); 

 f3w = new TF1("f3w",th_s1_down1, 0.05,0.5,0);

 f3w->SetLineColor(kBlack);
 f3w->SetLineWidth(2);
 f3w->Draw("same");  
 
 f3e = new TF1("f3e",th_s1_down2, 0.101,0.8,0);

 f3e->SetLineColor(kBlack);
 f3e->SetLineWidth(2);
 f3e->Draw("same"); 
 
 f3r = new TF1("f3r",th_s1_up2, 0.07,0.8,0);

 f3r->SetLineColor(kBlack);
 f3r->SetLineWidth(2);
 f3r->Draw("same"); 
 
 f3t = new TF1("f3t",th_s1_up3, 0.07,0.65,0);

 f3t->SetLineColor(kBlack);
 f3t->SetLineWidth(2);
 f3t->Draw("same"); 
 
 f3y = new TF1("f3y",th_s1_down3, 0.07,0.65,0);

 f3y->SetLineColor(kBlack);
 f3y->SetLineWidth(2);
 f3y->Draw("same"); 

};

//sector 2 data
if (i==1){
 f3q = new TF1("f3q",th_s2_up1, 0.41,1.5,0);

 f3q->SetLineColor(kBlack);
 f3q->SetLineWidth(2);
 f3q->Draw("same");  
 
 f3w = new TF1("f3w",th_s2_down1, 0.445,1.5,0);

 f3w->SetLineColor(kBlack);
 f3w->SetLineWidth(2);
 f3w->Draw("same");  
 
 
 f3e = new TF1("f3e",th_s2_up2, 0.41,1.5,0);

 f3e->SetLineColor(kBlack);
 f3e->SetLineWidth(2);
 f3e->Draw("same");  
    
 f3r = new TF1("f3r",th_s2_down2, 0.41,1.5,0);

 f3r->SetLineColor(kBlack);
 f3r->SetLineWidth(2);
 f3r->Draw("same");  

};

//sector 3 data
if (i==2){

 f3q = new TF1("f3q",th_s3_up1, 0.05,0.55,0);
 f3q->SetLineColor(kBlack);
 f3q->SetLineWidth(2);
 f3q->Draw("same"); 
 
 f3w = new TF1("f3w",th_s3_down1, 0.05,0.55,0);
 f3w->SetLineColor(kBlack);
 f3w->SetLineWidth(2);
 f3w->Draw("same"); 
 
 f3e = new TF1("f3e",th_s3_up2, 0.413,1.45,0);
 f3e->SetLineColor(kBlack);
 f3e->SetLineWidth(2);
 f3e->Draw("same");
 
 f3r = new TF1("f3r",th_s3_down2, 0.45,1.45,0);
 f3r->SetLineColor(kBlack);
 f3r->SetLineWidth(2);
 f3r->Draw("same");
};

//sector 4 data
if (i==3){

 f3q = new TF1("f3q",th_s4_up1, 0.05,0.8,0);
 f3q->SetLineColor(kBlack);
 f3q->SetLineWidth(2);
 f3q->Draw("same"); 
 
 f3w = new TF1("f3w",th_s4_down1, 0.05,0.8,0);
 f3w->SetLineColor(kBlack);
 f3w->SetLineWidth(2);
 f3w->Draw("same");
 
 f3e = new TF1("f3e",th_s4_up2, 0.05,0.8,0);
 f3e->SetLineColor(kBlack);
 f3e->SetLineWidth(2);
 f3e->Draw("same"); 
 
  
 f3r = new TF1("f3r",th_s4_down2, 0.11,0.8,0);
 f3r->SetLineColor(kBlack);
 f3r->SetLineWidth(2);
 f3r->Draw("same"); 

 f3t = new TF1("f3t",th_s3_up2, 0.413,1.45,0);
 f3t->SetLineColor(kBlack);
 f3t->SetLineWidth(2);
 f3t->Draw("same");
 
 f3y = new TF1("f3y",th_s3_down2, 0.45,1.45,0);
 f3y->SetLineColor(kBlack);
 f3y->SetLineWidth(2);
 f3y->Draw("same");
};

//sector 5 data
if (i==4){

 f3q = new TF1("f3q",th_s5_down1, 0.45,1.45,0);
 f3q->SetLineColor(kBlack);
 f3q->SetLineWidth(2);
 f3q->Draw("same");
 
 f3w = new TF1("f3w",th_s5_up1, 0.46,1.45,0);
 f3w->SetLineColor(kBlack);
 f3w->SetLineWidth(2);
 f3w->Draw("same");
 
 
 f3e = new TF1("f3e",th_s5_up2, 0.06,0.85,0);
 f3e->SetLineColor(kBlack);
 f3e->SetLineWidth(2);
 f3e->Draw("same");
 
 
 f3r = new TF1("f3r",th_s5_down2, 0.06,0.85,0);
 f3r->SetLineColor(kBlack);
 f3r->SetLineWidth(2);
 f3r->Draw("same");
 
 f3t = new TF1("f3t",th_s5_up3, 0.3,1.4,0);
 f3t->SetLineColor(kBlack);
 f3t->SetLineWidth(2);
 f3t->Draw("same");
 
 f3y = new TF1("f3y",th_s5_down3, 0.37,1.4,0);
 f3y->SetLineColor(kBlack);
 f3y->SetLineWidth(2);
 f3y->Draw("same");
};

//sector 6 data
if (i==5){

 f3q = new TF1("f3q",th_s6_up1, 0.138,1.4,0);
 f3q->SetLineColor(kBlack);
 f3q->SetLineWidth(2);
 f3q->Draw("same");
 
 f3w = new TF1("f3w",th_s6_down1, 0.171,1.4,0);
 f3w->SetLineColor(kBlack);
 f3w->SetLineWidth(2);
 f3w->Draw("same");
 
 f3e = new TF1("f3e",th_s6_down2, 0.45,1.4,0);
 f3e->SetLineColor(kBlack);
 f3e->SetLineWidth(2);
 f3e->Draw("same");
 
 f3r = new TF1("f3r",th_s6_up2, 0.414,1.4,0);
 f3r->SetLineColor(kBlack);
 f3r->SetLineWidth(2);
 f3r->Draw("same");

};

if (i==4){
c2->cd(1);
h_data_2->Draw("colz");

line_l1->Draw("same");  
line_l2->Draw("same");
fmax->Draw("same");  

 f3q->Draw("same"); 
 

 f3w->Draw("same");
 

 f3e->Draw("same"); 
 
  

 f3r->Draw("same"); 


 f3t->Draw("same");
 

 f3y->Draw("same");
};

};


MyFile2->cd();

for (Short_t i=0;i<6;i++){
qqq.str("");
qqq << "th_vs_p_sim/th_vs_p_pip_2_sim_" << i+1;
gDirectory->GetObject(qqq.str().c_str(),h_data_2);

if (i<3) pad_n = 4+i;
if (i>=3)pad_n = 7+i;

c->cd(pad_n);
c->cd(pad_n)->SetBottomMargin(0.15);
c->cd(pad_n)->SetLeftMargin(0.15);
h_data_2->GetXaxis()->SetLabelSize(0.05);
h_data_2->GetXaxis()->SetNdivisions(8+200);
h_data_2->GetYaxis()->SetLabelSize(0.05);
h_data_2->GetYaxis()->SetNdivisions(8+200);
h_data_2->GetXaxis()->SetTitle("P_{p'} (GeV)");
h_data_2->GetYaxis()->SetTitle("#theta_{p'} (deg)");
h_data_2->GetXaxis()->SetTitleSize(0.06);
h_data_2->GetYaxis()->SetTitleSize(0.06);
qqq.str("");
qqq << "Sector " << i+1<<" ,sim";
h_data_2->SetTitle(qqq.str().c_str());
h_data_2->GetYaxis()->SetRangeUser(10.,130.);
h_data_2->GetXaxis()->SetRangeUser(0.05,1.8);
h_data_2->Draw("colz");

 TLine *line_l1 = new TLine(0.05,12,1.5,12);
line_l1->SetLineColor(kBlue);
line_l1->SetLineWidth(2);
line_l1->Draw("same");

 TLine *line_l2 = new TLine(0.055,120.,0.8,120.);
line_l2->SetLineColor(kBlue);
line_l2->SetLineWidth(2);
line_l2->Draw("same"); 

 TF1 *fmax_sim = new TF1("fmax_sim",thmax, 0.2,1.7,0);

  fmax_sim->SetLineColor(kBlue);
  fmax_sim->SetLineWidth(2);
  fmax_sim->Draw("same"); 
   
//sector 1 sim
if (i==0){

   TF1 *f3a = new TF1("f3a",th_s1_up1, 0.05,0.5,0);

  f3a->SetLineColor(kBlack);
  f3a->SetLineWidth(2);
 f3a->Draw("same"); 

     TF1 *f3s = new TF1("f3s",th_s1_down1, 0.05,0.5,0);

  f3s->SetLineColor(kBlack);
  f3s->SetLineWidth(2);
 f3s->Draw("same");  
 
   TF1 *f3d = new TF1("f3d",th_s1_down2, 0.101,0.8,0);

  f3d->SetLineColor(kBlack);
  f3d->SetLineWidth(2);
 f3d->Draw("same"); 
 
    TF1 *f3f = new TF1("f3f",th_s1_up2, 0.07,0.8,0);

  f3f->SetLineColor(kBlack);
  f3f->SetLineWidth(2);
 f3f->Draw("same"); 
 
    TF1 *f3g = new TF1("f3g",th_s1_up3, 0.07,0.65,0);

  f3g->SetLineColor(kBlack);
  f3g->SetLineWidth(2);
 f3g->Draw("same"); 
 
     TF1 *f3h = new TF1("f3h",th_s1_down3, 0.07,0.65,0);

  f3h->SetLineColor(kBlack);
  f3h->SetLineWidth(2);
 f3h->Draw("same"); 

};

//sector 2 sim
if (i==1){
    TF1 *f3a = new TF1("f3a",th_s2_up1, 0.41,1.5,0);

  f3a->SetLineColor(kBlack);
  f3a->SetLineWidth(2);
 f3a->Draw("same");  
 
     TF1 *f3s = new TF1("f3s",th_s2_down1, 0.445,1.5,0);

  f3s->SetLineColor(kBlack);
  f3s->SetLineWidth(2);
 f3s->Draw("same");  
 
 
    TF1 *f3d = new TF1("f3d",th_s2_up2, 0.41,1.5,0);

  f3d->SetLineColor(kBlack);
  f3d->SetLineWidth(2);
 f3d->Draw("same");  
    
     TF1 *f3f = new TF1("f3f",th_s2_down2, 0.41,1.5,0);

  f3f->SetLineColor(kBlack);
  f3f->SetLineWidth(2);
 f3f->Draw("same");  

};
//sector 3 sim
if (i==2){

 TF1 *f3a= new TF1("f3a",th_s3_up1, 0.05,0.55,0);
 f3a->SetLineColor(kBlack);
 f3a->SetLineWidth(2);
 f3a->Draw("same"); 
 
  TF1 *f3s = new TF1("f3s",th_s3_down1, 0.05,0.55,0);
 f3s->SetLineColor(kBlack);
 f3s->SetLineWidth(2);
 f3s->Draw("same"); 
 
  TF1 *f3d = new TF1("f3d",th_s3_up2, 0.413,1.45,0);
 f3d->SetLineColor(kBlack);
 f3d->SetLineWidth(2);
 f3d->Draw("same");
 
   TF1 *f3f = new TF1("f3f",th_s3_down2, 0.45,1.45,0);
 f3f->SetLineColor(kBlack);
 f3f->SetLineWidth(2);
 f3f->Draw("same");


};
//sector 4 sim
if (i==3){

 TF1 *f3a = new TF1("f3a",th_s4_up1, 0.05,0.8,0);
 f3a->SetLineColor(kBlack);
 f3a->SetLineWidth(2);
 f3a->Draw("same"); 
 
 TF1 *f3s = new TF1("f3s",th_s4_down1, 0.05,0.8,0);
 f3s->SetLineColor(kBlack);
 f3s->SetLineWidth(2);
 f3s->Draw("same");
 
 TF1 *f3d = new TF1("f3d",th_s4_up2, 0.05,0.8,0);
 f3d->SetLineColor(kBlack);
 f3d->SetLineWidth(2);
 f3d->Draw("same"); 
 
  
 TF1 *f3f = new TF1("f3f",th_s4_down2, 0.11,0.8,0);
 f3f->SetLineColor(kBlack);
 f3f->SetLineWidth(2);
 f3f->Draw("same"); 

 TF1 *f3g = new TF1("f3g",th_s3_up2, 0.413,1.45,0);
 f3g->SetLineColor(kBlack);
 f3g->SetLineWidth(2);
 f3g->Draw("same");
 
 TF1 *f3h = new TF1("f3h",th_s3_down2, 0.45,1.45,0);
 f3h->SetLineColor(kBlack);
 f3h->SetLineWidth(2);
 f3h->Draw("same");
};
//sector 5 sim
if (i==4){

 TF1 *f3a = new TF1("f3a",th_s5_down1, 0.45,1.45,0);
 f3a->SetLineColor(kBlack);
 f3a->SetLineWidth(2);
 f3a->Draw("same");
 
   TF1 *f3s = new TF1("f3s",th_s5_up1, 0.46,1.45,0);
 f3s->SetLineColor(kBlack);
 f3s->SetLineWidth(2);
 f3s->Draw("same");
 
 
  TF1 *f3d = new TF1("f3d",th_s5_up2, 0.06,0.85,0);
 f3d->SetLineColor(kBlack);
 f3d->SetLineWidth(2);
 f3d->Draw("same");
 
 
   TF1 *f3f = new TF1("f3f",th_s5_down2, 0.06,0.85,0);
 f3f->SetLineColor(kBlack);
 f3f->SetLineWidth(2);
 f3f->Draw("same");
 
   TF1 *f3g = new TF1("f3g",th_s5_up3, 0.3,1.4,0);
 f3g->SetLineColor(kBlack);
 f3g->SetLineWidth(2);
 f3g->Draw("same");
 
    TF1 *f3h = new TF1("f3h",th_s5_down3, 0.37,1.4,0);
 f3h->SetLineColor(kBlack);
 f3h->SetLineWidth(2);
 f3h->Draw("same");
};

//sector 6 sim
if (i==5){

 TF1 *f3a = new TF1("f3a",th_s6_up1, 0.138,1.4,0);
 f3a->SetLineColor(kBlack);
 f3a->SetLineWidth(2);
 f3a->Draw("same");
 
 TF1 *f3s = new TF1("f3s",th_s6_down1, 0.171,1.4,0);
 f3s->SetLineColor(kBlack);
 f3s->SetLineWidth(2);
 f3s->Draw("same");
 
 TF1 *f3d = new TF1("f3d",th_s6_down2, 0.45,1.4,0);
 f3d->SetLineColor(kBlack);
 f3d->SetLineWidth(2);
 f3d->Draw("same");
 
 TF1 *f3f = new TF1("f3f",th_s6_up2, 0.414,1.4,0);
 f3f->SetLineColor(kBlack);
 f3f->SetLineWidth(2);
 f3f->Draw("same");

};
if (i==4){
c2->cd(2);
h_data_2->Draw("colz");

line_l1->Draw("same");
line_l2->Draw("same");
  fmax_sim->Draw("same"); 

}


};

c->cd();   
TPad*newpad = new TPad("newpad","a transparent pad",0.,0.,1.,1.);
 newpad->SetFillStyle(4000);
 newpad->Draw();
  newpad->cd();
 TLatex tex1, tex2, tex3, tex4;
 qqq.str("");
 TLine *line_l = new TLine(0.33,0.,0.33,1.);
line_l->SetLineColor(12);
line_l->SetLineWidth(2);
line_l->Draw();

 TLine *line_lq = new TLine(0.66,0.,0.66,1.);
line_lq->SetLineColor(12);
line_lq->SetLineWidth(2);
line_lq->Draw();

 TLine *line_l2 = new TLine(0.,0.5,1.,0.5);
line_l2->SetLineColor(12);
line_l2->SetLineWidth(2);
line_l2->Draw();
};

//-----------------------------

