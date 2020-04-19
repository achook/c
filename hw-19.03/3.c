#include <math.h>
#include <stdio.h>

int main() {
    float xp = 0.8, xk = 2.8, n = 10;
    float dx = (xk - xp) / n;

    float s = 0;
    int i;

    for (i = 1; i < n; i++) {
        s += sin((float)i * dx + xp);
    }

    s = (s + ((sin(xp) + sin(xk)) / 2)) * dx;

    printf("%f\n", s);

    return 0;
}
