#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int discriminant;

    printf("Masukkan koefisien a: ");
    scanf("%d", &a);
    printf("Masukkan koefisien b: ");
    scanf("%d", &b);
    printf("Masukkan koefisien c: ");
    scanf("%d", &c);

    discriminant = pow(b, 2) - 4*a*c;

    if (discriminant > 0) {
        printf("Persamaan kuadrat menyinggung sumbu x di dua titik.\n");
    } else if (discriminant == 0) {
        printf("Persamaan kuadrat menyinggung sumbu x di satu titik.\n");
    } else {
        printf("Persamaan kuadrat tidak menyinggung sumbu x sama sekali.\n");
    }

    return 0;
}