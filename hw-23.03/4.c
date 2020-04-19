#include <stdio.h>
#include <math.h>

#define SIZE sizeof(int)*8
#define MAX 100001

int sq (int x) {
    int root = pow(x, 2);
    
    int len = 0;
    int i;

    for (i = 0; i < SIZE; i++) {
        if (root - (root % (int)pow(10, i)) == 0) {
            len = i;
            i = SIZE;
        }
    }

    return root == (x % (int)pow(10, len));
}

int main() {
    int i;

    printf("Liczby z zakresu <1-10000> kończące się swoim kwadratem: ");

    for (i = 1; i <= 10000; i++) {
        if (sq(i)) printf("%d ", sq(i));
    }

    printf("\n");

    return 0;
}