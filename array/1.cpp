#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int y [] = {9, 2, 7, 3, 5}; //size ga ditenntuin tp dah diisi dnegan 5 data. indeksnya 0-4
    int n, r = 0; //r = 0 karena inisialisasi untuk dijumlah
    for ( n = 0; n < 5; n++) { //n untuk nyimpan indeks
        r += y[n]; // r = hasil dari penjumlahan 
    } // n = 0 -> 0 = 0 + 9, r= 9
    cout << " " << r;
    getchar();
    return 0;
}