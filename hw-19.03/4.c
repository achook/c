#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char text[11];
    // int number;

    int len, i;

    fgets(text, 11, stdin);
    // scanf("%d", &number);

    len = strlen(text);

    for (i = 0; i < len; i++) {
        if (text[i] + len <= 255 && !isspace(text[i])) text[i] += len;
    }

    fputs(text, stdout);
}
