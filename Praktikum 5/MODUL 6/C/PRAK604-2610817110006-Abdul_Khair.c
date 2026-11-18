#include <stdio.h>
#include <string.h>

int main() {
    char code[100], message[100];
    int star = 0, hashtag = 0;

    fgets(code, 100, stdin);
    fgets(message, 100, stdin);

    code[strcspn(code, "\n")] = '\0';
    message[strcspn(message, "\n")] = '\0';

    if(strlen(code) != strlen(message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        for (int i = 0; code[i] != '\0'; i++) {
            if (code[i] == ' ' && message[i] == ' '){
                printf(" ");
            } else if (code[i] == message[i]) {
                printf("*");
                star++;
            } else {
                printf("#");
                hashtag++;
            }
        }

        printf("\n*=%d\n", star);
        printf("#=%d\n", hashtag);

        if (star >= hashtag){
            printf("Pesan Asli\n");
        } else {
            printf("Pesan Palsu\n");
        }
    }
    return 0;
}