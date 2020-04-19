#include <math.h>
#include <stdio.h>

int main() {
    int x, y;
    float root;

    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    root = pow(y, 1.0/x);

    printf("Pierwiastek %d stopnia z %d to %.2f\n", x, y, root);

    return 0;
}