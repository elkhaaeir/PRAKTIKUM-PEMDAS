#include <stdio.h>
#include <ctype.h>

int main(){
    char sentence[200];
    int vocal = 0, consonan = 0;

    printf("Kalimat : ");
    fgets(sentence, 200, stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char letter = tolower(sentence[i]);

        if (letter == 'a' || letter == 'i' ||
            letter == 'u' || letter == 'e' ||
            letter == 'o') {
            vocal++;
        } else if (letter >= 'a' && letter <= 'z') {
            consonan++;
        }
    }

    printf("Jumlah Vokal : %d\n", vocal);
    printf("Jumlah Konsonan : %d\n", consonan);

    return 0;
}
