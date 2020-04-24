#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 6

#define n 20

int main() {

    int arr[n];
    int i, j = 0, k = 0;

    srand(time(0));
    
    for (i = 0; i < n; i++) {
        arr[i] = rand() % MAX;
        if (arr[i] != 0) k++;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int* non_zero = malloc(k * sizeof(int));

    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            non_zero[j] = arr[i];
            j++;
        } 
    }

    for (i = 0; i < k; i++) {
        printf("%d ", non_zero[i]);
    }
    printf("\n");

    free(non_zero);

    return 0;
}