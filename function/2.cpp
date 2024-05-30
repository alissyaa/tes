#include <iostream>
#include <string.h>
using namespace std;

int main() {
    system("CLS");
    
    char nama[25];

    strcpy(nama, "Alissya Humairah M");
    cout << "Nama: " << nama << endl;
    cout << "Banyaknya karakter nama anda adalah: " << strlen(nama);

    getchar();
    return 0;
}