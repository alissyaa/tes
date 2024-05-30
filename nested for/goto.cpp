#include <iostream>
using namespace std;

main () {
    char pil;
    char nim[30];
    cout << "Input NIM: ";
    cin >> nim;
    x:
    cout << nim << endl;
    cout << "Apa anda ingin menampilkan nim anda lagi Y/T" << endl;
    cin >> pil;
    if ((pil=='Y' || pil=='y'))
    goto x;
    system ("pause");
}