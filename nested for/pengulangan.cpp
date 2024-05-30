#include <stdio.h>

main () {
    int panjang, lebar, luas;
    do {
        printf("Panjang [0=selesai]: ");
        scanf("%d", &panjang);
        printf("Lebar [0=selesai]: ");
        scanf("%d", &lebar);
        getchar();
        luas = panjang * lebar;
        printf("Luas = %d\n", luas);
        getchar;
    }
    while ((panjang != 0) && (lebar != 0));
}