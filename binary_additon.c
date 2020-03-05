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

    int mask = 1;

    int i;
    for (i = 0; i < LENGTH; i++) {
        x = (a & mask) | (b & mask);
        x = x >> i;

        c = (a & mask) & (b & mask);
        c = c >> i;

        if (c & carry) {
            sum = sum | mask;
            carry = 1;
        } else if (c | (x & carry)) {
            carry = 1;
        } else if (x | carry) {
            sum = sum | mask;
            carry = 0;
        }

        mask = mask << 1;
    }

    printf("%d\n", sum);

    return 0;
}
