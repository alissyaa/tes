#include <iostream>
using namespace std;

void luas(int *ls,int *kel, int p, int l)
{
     *ls = p*l; 
     *kel = 2*(p+l);
}

int main() {
    int pj,lb,ls,kl;
    cout<<"Panjang = ";cin>>pj;
    cout<<"Lebar   = ";cin>>lb;
    luas(&ls,&kl,pj,lb);
    cout<<"\nLuasnya     = "<<ls;
    cout<<"\nKelilingnya ="<<kl<<endl;
    system("pause");
}