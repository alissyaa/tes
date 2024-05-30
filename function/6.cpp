#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system("CLS");
    
    int x,y;
    float z;

    cout << "Menghitung x pangkat y\n";
    cout <<" x="; cin>> x; 
    cout <<" y="; cin>> y; 

    cout.precision(4);
    z=pow(x,y);
    cout << x << "dpangkatkan dengan " << y << "ialah " << z << endl;
    z= sqrt(x);
    cout << "akard dari " << x << " adalaj " << z << endl;
    system("pause");
    return 0;
}