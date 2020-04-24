#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 101

void swap(int *x, int *y) {  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  

void bubble(int arr[], int len) {  
    int i, j; 

    for (i = 0; i < len-1; i++) {
        for (j = 0; j < len-i-1; j++) {
            if (arr[j] > arr[j+1]) swap(&arr[j], &arr[j+1]);  
        }
    } 
}

int main() {
    int n, i, x;
    scanf("%d", &n);
    int* arr = malloc(n * sizeof(int));

    srand(time(0));

    for (i = 0; i < n; i++) {
        arr[i] = rand() % MAX;
    }

    bubble(arr, n);

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    n++;
    arr = realloc(arr, sizeof(arr) * n);

    scanf("%d", &x);

    for (i = n - 1; i >= 1; i--) {
        if (x >= arr[i-1]) {
            arr[i] = x;
            i = 0;
        } else {
            arr[i] = arr[i-1];
            arr[i-1] = x;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}