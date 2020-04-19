#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    int i;
    int e = 1;
    int m = 1;
    int suma = 0;
    int bin [32];
    printf("podaj liczbe elementow\n");
    scanf("%d",&n);

    unsigned *t;
    t = malloc(sizeof(t)*n);

    for(i=0;i<n;i++) {
        printf("element %d = ",e);
        scanf("%u",&t[i]);
        e++;
    }

    for(i=0;i<n;i++){ 
        if(t[i] & m && t[i] >> 3 & m && t[i] >> 6 & m && t[i] >> 10 & m ) {
             suma = suma + t[i];
        }
    }

    printf(" suma to %d\n",suma);

    free(t);

    return 0;
};