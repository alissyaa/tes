#include <iostream>
using namespace std;

int main () {
    int panjang, lebar, luas;
    char ulang;
    cout << "tentukan perhitungan? (Y/T): " << endl;
    cin >> ulang;
    while ((ulang == 'Y') || (ulang == 'y')) {
        cout << "Panjang: ";
        cin >> panjang;
        cout << "Lebar: ";
        cin >> lebar;
        getchar();
        luas = panjang * lebar;
        cout << luas << endl;
        getchar;
    cout << "Teruskan perhhitungan? (Y/T): " << endl;
    cin >> ulang;
    getchar();
    }
}