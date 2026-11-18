#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int length, palindrom = 1;

    scanf("%s", word);

    length = strlen(word);

    for (int i = 0; i < length / 2; i++) {
        if(tolower(word[i]) != tolower(word[length - 1 - i])) {
            palindrom = 0;
        }
    }

    if (palindrom == 1) {
        printf("kata '%s' adalah Palindrom", word);
    } else {
        printf("Kata '%s' bukan palindrom", word);
    }
    return 0;
}