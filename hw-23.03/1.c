#include <math.h>
#include <stdio.h>

float power(float x, int y) {
    return pow(x, y);
}

int main() {
    float x;
    int y;

    scanf("%f", &x);
    scanf("%d", &y);

    printf("%f\n", power(x, y));
}