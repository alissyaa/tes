#include <iostream>
using namespace std;

int main() {
    int n;
    char ulang;
    cout << "tentukan perhitungan? (Y/T): " << endl;
    cin >> ulang;
    while ((ulang == 'Y') || (ulang == 'y')) {
    cout << "Masukkan nilai n: ";
    cin >> n;

    int bilangan = 2; 
    int jumlah = 0;
    
    cout << "Deret: ";
    for (int i = 1; i <= n; i++) {
        cout << bilangan;
        jumlah += bilangan;

        if (i < n) {
            cout << " + ";
        } else {
            cout << " = ";
        }

        bilangan += 2; 
    }

    cout << jumlah << endl;
    cout << "Teruskan perhhitungan? (Y/T): " << endl;
    cin >> ulang;
    getchar();
}
}