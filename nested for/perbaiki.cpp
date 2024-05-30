#include <stdio.h>

main () {
    int n, i, f;

    printf ("MENGHITUNG NILAI FAKTORIAL n (n!)\n\n");
    printf ("Masukkan sebarang bilangan integer: ");
    scanf("%d", &n);
    getchar();
    i = n; f = 1;
    while (i>1){
        f *= i;
        i--;
    }
    printf("%d! = %d\n\n", n,f);
    getchar();
}