#include <stdio.h>

#define BIN_SIZE 32
#define HEX_SIZE 8

int main() {
    int input;

    int binary[BIN_SIZE];
    char hexadecimal[HEX_SIZE+1];
    char hex_numbers[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int i, j;
    int sum = 0;
    int pos;

    scanf("%d", &input);
    for (i = BIN_SIZE-1; i >= 0; i--) {
        binary[i] = input & 1;
        input  = input >> 1;
    }

    pos = BIN_SIZE-1;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            sum = sum | (binary[pos] << j);
            pos--;
        }

        hexadecimal[HEX_SIZE-i-1] = hex_numbers[sum];
        sum = 0;
    }

    hexadecimal[HEX_SIZE] = '\0';
    printf("%s\n", hexadecimal);

    return 0;
}