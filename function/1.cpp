#include <iostream>
#include <string.h>
using namespace std;

int main() {
    system("CLS");
    
    char nama[25];
    strcpy(nama, "Alissya Humairah M");
    printf("Nama: %s\n", nama);

    printf("Banyaknya karakter nama anda adalah: %d", strlen(nama));
    
    getchar();
    return 0;
}