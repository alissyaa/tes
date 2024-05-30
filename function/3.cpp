#include <iostream>
#include <string.h>
using namespace std;

int main() {
    system("CLS");
    
    char satu[20] = "Rachmawati ";
    char dua[20] = "Dian";
    strcat(satu, dua);

    cout << "hasil" << satu << endl;
    cout << "jadi kapital " << strupr(satu) << endl;
    cout << "jadi huruf kecil " << strlwr(satu) << endl;
    
    getchar();
    return 0;
}