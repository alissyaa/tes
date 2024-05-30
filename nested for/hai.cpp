#include <stdio.h>

int main() {
    int n, i;
    long long f = 1; // Menggunakan long long untuk menangani nilai faktorial yang besar

    printf("MENGHITUNG NILAI FAKTORIAL n (n!)\n\n");
    printf("Masukkan sebarang bilangan integer: ");
    scanf("%d", &n);
    
    i = 1;
    while (i <= n) {
        f *= i;
        i++;
    }
    
    printf("%d! = %lld\n\n", n, f);
    
    return 0;
}
