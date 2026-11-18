#include <stdio.h>
#include <string.h>

int main() {
    char front[100], back[100];
    char full[200];
    int length = 0;

    printf("Nama Depan : ");
    fgets(front, 100, stdin);
    front[strcspn(front, "\n")] = '\0';

    printf("Nama Belakang : ");
    fgets(back, 100, stdin);
    back[strcspn(back, "\n")] = '\0';

    strcpy(full, front);
    strcat(full, " ");
    strcat(full, back);

    for (int i = 0; full[i] != '\0'; i++) {
        if (full[i] != ' ') {
            length++;
        }
    }

    printf("Nama Lengkap : %s\n", full);
    printf("Panjang Nama (tanpa spasi) : %d\n", length);

    return 0;
}