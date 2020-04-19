#include <stdio.h>

int kura (int a[10]) {
    int i;

    for (i = 0; i < 10; i ++) {
        a[i] = i;
    }

    return a;
}

int main() {
    int a, z;
    float b, c;

    int t[10];
    int i;

    kura(t);

    for (i = 0; i < 10; i ++) {
        printf("%d\n", t[i]);
    }
}