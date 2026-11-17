#include <stdio.h>
#include <string.h>

int main() {
    char front[100], back[100];
    char full[200];
    int length;

    printf("Nama Depan : ");
    scanf("%s", front);
    printf("Nama Belakang : ");
    scanf("%s", back);

    strcpy(full, front);
    strcat(full, " ");
    strcat(full, back);

    length = strlen(front) + strlen(back);

    printf("Nama Lengkap : %s\n", full);
    printf("Panjang Nama (Tanpa Spasi) : %d\n", length);

    return 0;
}