#include <stdio.h>
int main () {
    int panjang, lebar, luas;
    char ulang;
    x:
        printf("Panjang: ");
        scanf("%d", &panjang);
        printf("Lebar: ");
        scanf("%d", &lebar);
        getchar();
        luas = panjang * lebar;
        printf("Luas = %d\n\n", luas);
        getchar;
    printf("Teruskan perhhitungan? (Y/T): ");
    scanf("%c", &ulang);
    if ((ulang == 'Y') || (ulang == 'y')) 
    goto x;
    getchar();
    }