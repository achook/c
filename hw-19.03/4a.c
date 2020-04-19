#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char text[11];
    int len, i;

    fgets(text, 11, stdin);
    len = strlen(text);

    for (i = 0; i < len; i++) {
        if (!isspace(text[i])) text[i] -= len;
    }

    fputs(text, stdout);
}
