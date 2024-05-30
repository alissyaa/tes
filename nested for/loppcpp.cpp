#include <iostream>
using namespace std;

main () {
    int panjang, lebar, luas;
    do {
        cout << "Panjang [0=selesai]: ";
        cin >> panjang;
        cout << "Lebar [0=selesai]";
        cin >> lebar;
        getchar();
        luas = panjang * lebar;
        cout << luas << endl;
        getchar;
    }
    while ((panjang != 0) && (lebar != 0));
}