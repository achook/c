#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define SIZE sizeof(int)*8
#define MAX 100001

int sq (int x) {
    int root = sqrt(x);
    
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
    int r;
    srand(time(0));
    r = rand() % MAX;

    printf(sq(r) ? "%d konczy sie swoim pierwiastkiem\n" : "%d nie konczy sie swoim pierwiastkiem\n", r);

    return 0;
}