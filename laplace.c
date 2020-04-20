#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int laplace (int initial_size, int *initial_matrix) {
    int initial_columns_skip, initial_rows, initial_columns, result_rows, result_columns, sum = 0;
    // Allocate array for the square matrix smaller by 1
    int *result_matrix = (int *)malloc((initial_size-1) * (initial_size-1) * sizeof(int)); 

    // If its 2x2 matrix we can do it
    if (initial_size == 2) {
        return (*(initial_matrix) * *(initial_matrix+3)) - (*(initial_matrix+2) * *(initial_matrix+1));
    }

    // We'll always calculate it for the first row
    for (initial_columns_skip = 0; initial_columns_skip < initial_size; initial_columns_skip++) {

        result_rows = 0;
        result_columns = 0;

        // Create the result matrix for row 'initial_columns_skip'
        for (initial_rows = 1; initial_rows < initial_size; initial_rows++) {
            for (initial_columns = 0; initial_columns < initial_size; initial_columns ++) {
                if (initial_columns == initial_columns_skip) continue;
                
                *(result_matrix + result_rows*(initial_size-1) + result_columns) = *(initial_matrix + initial_rows*initial_size + initial_columns);
                
                result_columns++;
                
                // Go to the next row
                if (result_columns > initial_size-2) {
                    result_columns = 0;
                    result_rows++;
                }
            }
        }
        
        // Sum all determinants
        sum += *(initial_matrix+initial_columns_skip) * (int)pow(-1, initial_columns_skip+2) * laplace(initial_size-1, result_matrix);
    }

    free(result_matrix);
    return sum;
};

int main() {
    int i, j, n;
    scanf("%d", &n);

    int *matrix = (int *)malloc(n * n * sizeof(int));
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", (matrix + i*n + j));
        }
    }


    printf("%d\n", laplace(n, matrix));
    free(matrix);
    return 0;
}
