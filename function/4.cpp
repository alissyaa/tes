#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    system("CLS");
    
    char satu[20] = "Rachmawati ";
    char dua[20] = "Dian";
    strcat(satu, dua);

    printf("%s\n", satu);
    printf("%s\n", strlwr(satu));
    printf("%s\n", strupr(satu));
    
    getchar();
    return 0;
}