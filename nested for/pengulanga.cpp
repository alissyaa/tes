#include <stdio.h>
int main () {
    int panjang, lebar, luas;
    char ulang;
    printf ("tentukan perhitungan? (Y/T): ");
    scanf ("%c", &ulang);
    while ((ulang == 'Y') || (ulang == 'y')) {
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
    getchar();
    }
}