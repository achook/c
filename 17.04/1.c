#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 12
#define max 101

int main() {
    int a[n], b[n], c[2*n];

    int *ap = &a[0];
    int *bp = &b[0];
    int *cp = &c[0];

    srand(time(0));

    while (ap < &a[n-1]) {
        *ap = rand() % max;
        *bp = rand() % max;
        ap++;
        bp++;
    }

    printf("Tablica a: ");
    for (ap = &a[0]; ap < &a[n-1]; ap++) {
        printf("%4d", *ap);
    }
    printf("\n");

    printf("Tablica b: ");
    for (bp = &b[0]; bp < &b[n-1]; bp++) {
        printf("%4d", *bp);
    }
    printf("\n");

    ap = &a[0];
    bp = &b[0];

    while (ap < &a[n-1]) {
        *cp = *ap;
        cp++;
        ap++;
        *cp = *bp;
        cp++;
        bp++;
    }

    printf("Tablica c: ");
    for (cp = &c[0]; cp < &c[2*n-2]; cp++) {
        printf("%4d", *cp);
    }
    printf("\n");

    return 0;
}