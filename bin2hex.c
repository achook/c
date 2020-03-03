#include <stdio.h>

#define BIN_SIZE 32
#define HEX_SIZE 8

int main() {
    int input;
    int binary[BIN_SIZE];
    char hexadecimal[HEX_SIZE];
    char hex_numbers[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int i, j;
    int sum = 0;
    int pos;

    scanf("%d", &input);
    for (i = 0; i < BIN_SIZE; i++) {
        binary[i] = (input >> (BIN_SIZE-i-1)) & 1;
        
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            pos = BIN_SIZE - ((i*4) + j + 1);
            sum = sum | (binary[pos] << j);
        }

        hexadecimal[HEX_SIZE-i-1] = hex_numbers[sum];
        sum = 0;
    }

    for (i = 0; i < HEX_SIZE; i++) {
        printf("%c", hexadecimal[i]);
    }

    printf("\n");

    return 0;
}