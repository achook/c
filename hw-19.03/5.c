#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char cleartext[11], ciphertext[11];
    int shift;

    int len, i;

    printf("Podaj tekst: ");
    fgets(cleartext, 11, stdin);
    printf("Podaj przesuniecie: ");
    scanf("%d", &shift);

    len = strlen(cleartext);

    for (i = 0; i < len; i++) {
        if (cleartext[i] >= 97 &&  cleartext[i] <= 122) {
            ciphertext[i] = (((cleartext[i] - 97) + shift) % 26) + 97;
        } else if (cleartext[i] >= 65 &&  cleartext[i] <= 90) {
            ciphertext[i] = (((cleartext[i] - 65) + shift) % 26) + 65;
        } else {
            ciphertext[i] = cleartext[i];
        }
    }

    fputs(cleartext, stdout);
    fputs(ciphertext, stdout);
    printf("\n");
}
