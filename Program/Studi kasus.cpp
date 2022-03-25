#include <iostream>
using namespace std;
int main() {
  
  int bulan1,bulan2,gaji1,gaji2;
  float bonus1, bonus2;
  cout<<endl;
  cout<<" S L I P  G A J I"<<endl;
  cout<<endl;
  cout<<"Berapa Lama (Bulan) Tim 1 Bekerja?";
  cin>>bulan1;
  cout<<"Berapa Lama (Bulan) Tim 2 Bekerja?";
  cin>>bulan2;

  if (bulan1<5)
  {
    bonus1= 0.06*22000000;
    gaji1= 22000000 + bonus1;
    cout<<"Mengerjakan Kurang Dari 5 Bulan Maka Gaji tim 1 adalah "<<gaji1;
    cout<<endl;
  }else if(bulan1>=5)
  {
    cout<<"Mengerjakan lebih dari 5 bulan maka gaji tim 1 22000000"<<endl;
  }
  if (bulan2<5)
  {
    bonus2=0.06*28000000;
    gaji2=28000000+bonus2;
    cout<<"Mengerjakan kurang dari 5 bulan maka gaji tim 2 adalah "<<gaji2;
    cout<<endl;
  }else if(bulan2>=5){
    cout<<"Mengerjakan lebih dari 5 bulan maka gaji tim 2 adalah 28000000"<<endl;
  }
  
} 
