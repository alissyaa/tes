#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    int discriminant;

    printf("Masukkan koefisien a: ");
    scanf("%lf", &a);
    printf("Masukkan koefisien b: ");
    scanf("%lf", &b);
    printf("Masukkan koefisien c: ");
    scanf("%lf", &c);

    discriminant = pow(b * b - 4 * a * c);

    if (discriminant > 0) {
        printf("Persamaan kuadrat menyinggung sumbu x di dua titik.\n");
    } else if (discriminant == 0) {
        printf("Persamaan kuadrat menyinggung sumbu x di satu titik.\n");
    } else {
        printf("Persamaan kuadrat tidak menyinggung sumbu x sama sekali.\n");
    }

    return 0;
}