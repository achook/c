#include <stdio.h>

int pitagoras(int a ,int b, int c) {
    return (a*a + b*b == c*c);
}

int main() {
    int a, b, c;
    int x;

    scanf("%d", &x);

    for (a = 1; a < x; a ++) {
        for (b = 1; b < x; b++) {
            for (c = 1; c < x; c++) {
                if (pitagoras(a, b, c)) printf("%d %d %d\n", a, b, c);
            }
        }
    }

    return 0;
}