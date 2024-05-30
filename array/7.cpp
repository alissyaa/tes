#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2], i, j, k;

    printf("Matriks 1\n");
    for (i = 0; i < 2; i++) {
        printf("Baris %d\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("Kolom %d: ", j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matriks 2\n");
    for (i = 0; i < 2; i++) {
        printf("Baris %d\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("Kolom %d: ", j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Penjumlahan Matriks
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Hasil Penjumlahan Matriks\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    // Perkalian Matriks
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Hasil Perkalian Matriks\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
