#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define SIZE 15

int main() {
    int t [SIZE] [SIZE];
    int x, y;
    int i, j;
    int x_dist, y_dist;

    srand(time(0));

    x = rand() % SIZE;
    y = rand() % SIZE;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            x_dist = abs(i - x); //abs() -> wartość bezwzględna
            y_dist = abs(j - y);

            if (x_dist > y_dist) {
                t[i][j] = x_dist;
            } else {
                t[i][j] = y_dist;
            }
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%3d", t[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}