#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define min_length 8

int main() {
    char username[100], password[100];
    char loginuser[100], loginpass[100];
    char tempuser[100]; 
    
    printf("=== Registrasi ===\n");
    while (1) { 
        printf("Masukkan username (minimal 8 karakter): ");
        scanf("%s", username);
        if (strlen(username) < min_length) {
            printf("Username harus minimal 8 karakter.\n");
            continue;
        }
        printf("Masukkan password (minimal 8 karakter): ");
        scanf("%s", password);
        if (strlen(password) < min_length) {
            printf("Password harus minimal 8 karakter.\n");
            continue;
        }
        break;
    }

    printf("Masukkan username: ");
    scanf("%s", loginuser);
    printf("Masukkan password: ");
    scanf("%s", loginpass);

    strcpy(tempuser, username);
    for (int i = 0; tempuser[i]; i++) {
        tempuser[i] = tolower(tempuser[i]);
    }
    for (int i = 0; loginuser[i]; i++) {
        loginuser[i] = tolower(loginuser[i]);
    }

    if (strcmp(tempuser, loginuser) == 0 && strcmp(password, loginpass) == 0) {
        printf("Login berhasil!\n");
    } else {
        printf("Username atau password salah.\n");
    }

    return 0;
}