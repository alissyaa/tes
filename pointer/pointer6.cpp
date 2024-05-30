#include <iostream>
using namespace std;
void luas(int *ls, int p, int l){ 
    *ls = p*l; 
    }

int main(){
  int pj,lb,ls;
  cout<<"Panjang = "; cin>>pj;
  cout<<"Lebar   = "; cin>>lb;
  luas(&ls,pj,lb);
  cout<<"\nLuasnya ="<<ls;
  system("pause");
}