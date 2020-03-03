#include <stdio.h>

#define LENGTH sizeof(int)*8

int main() {
    unsigned int a, b;

    scanf("%u", &a);
    scanf("%u", &b);

    int sum = 0;
    int carry = 0;
    int x = 0;
    int c = 0;

    int i;
    for (i = 0; i < LENGTH; i++) {
        x = ((a & 1<<i) | (b & 1<<i))>>i;
        c = ((a & 1<<i) & (b & 1<<i))>>i;

        if (c & carry) {
            sum = sum | (1<<i);
            carry = 1;
        } else if (c | (x & carry)) {
            carry = 1;
        } else if (x | carry) {
            sum = sum | (1<<i);
            carry = 0;
        }
    }

    printf("%d\n", sum);
}
