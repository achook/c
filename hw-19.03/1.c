#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c;
    float delta;
    float x1, x2;

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4.0 * a * c);

    if (delta < 0.0) {
        printf("Rownanie nie ma pierwiastkow\n");
    } else if (delta > 0.0) {
        x1 = (-1.0 * b - sqrt(delta)) / (2 * a);
        x2 = (-1.0 * b + sqrt(delta)) / (2 * a);
        printf("Rownanie ma dwa pierwiastki: %.2f i %.2f\n", x1, x2);
    } else {
        x1 = (-1.0 * b) / (2 * a);
        printf("Rownanie ma jeden pierwiastek: %.2f\n", x1);
    }


    return 0;
}