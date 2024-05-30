#include <stdio.h>
#include <math.h>

int main() {

    int x, y;
    float z;

    printf("Menghitung x pangkat y\n");
    printf(" x="); 
    scanf("%d", &x); 
    printf(" y="); 
    scanf("%d", &y); 

    z = pow(x, y);
    printf("%d dipangkatkan dengan %d ialah %.4f\n", x, y, z);
    z = sqrt(x);
    printf("akar dari %d adalah %.4f\n", x, z);
    
    return 0;
}
