#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
    system("CLS");
    
    char string1[15], string2[5];
    int hasil;
    printf("Masukkan string 1: "); scanf("%s", &string1); getchar();
    printf("Masukkan string 2: "); scanf("%s", &string2); getchar();

    hasil = strcmp(string1, string2);
    printf("%d",hasil);

    if (hasil > 0)
    printf("%s > %s", string1, string2);
    else if (hasil == 0)
    printf("%s = %s", string1, string2);
    else 
    printf("%s < %s", string1, string2);
    getchar();

    return 0;
}