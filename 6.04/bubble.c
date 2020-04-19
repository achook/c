#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 30
#define MAX 101

void swap(int *x, int *y) {  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  

void bubble(int arr[]) {  
    int i, j; 

    for (i = 0; i < LENGTH-1; i++) {
        for (j = 0; j < LENGTH-i-1; j++) {
            if (arr[j] > arr[j+1]) swap(&arr[j], &arr[j+1]);  
        }
    } 
}

void print(int arr[]) {
    int i;

    for (i = 0; i < LENGTH; i++) {
        printf("%d ", arr[i]);
        
    }

    printf("\n");
}

int main() {
    int i;
    int t[LENGTH];

    srand(time(0));

    for (i = 0; i < LENGTH; i++) {
        t[i] = rand() % MAX;
    }

    print(t);
    bubble(t);
    print(t);

    return 0;
}