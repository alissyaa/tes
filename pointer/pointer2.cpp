#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int n1, n2;
    int *p;
    p = &n1; //si p ini di alamat/kotak n1
    *p = 10; //diisi lah n1 ini 10
    p = &n2; //p gabut mw pindah hati, jadinya dia ke alamat/kotak n2
    *p = 20; //diisilah 20
    //jadi p nya skrg di n2

    cout << "Nilai n1 = " << n1;
    cout  << "\nNilai n2 = " <<n2;
    cout << "\nNilai p = " << *p;
    
    return 0;
}