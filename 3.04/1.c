#include <stdio.h>

int main() {
    double x = 1, y = 2, z = 6;
    double *wsk1, *wsk2, *wsk3;

    wsk1 = &x;
    wsk2 = &y;
    wsk3 = &z;

    *wsk2 = *wsk1;

    wsk1 = &x;
    wsk2 = wsk1;

    printf("\nWartosc wsk1 to\t%f", *wsk1);
    printf("\nWartosc wsk2 to\t%f", *wsk2);
    printf("\nWartosc wsk3 to\t%f", *wsk3);

    printf("\nAdres x to\t%p", &x);
    printf("\nAdres y to\t%p", &y);
    printf("\nAdres z to\t%p", &z);

    printf("\n");

    return 0;

}