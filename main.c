#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "read_num.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
        return -1;
    }

    const char *file1 = argv[1];
    const char *file2 = argv[2];

    uint32_t number1 = read_num(file1);
    uint32_t number2 = read_num(file2);

    uint32_t sum = number1 + number2;

    printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", number1, number1, number2, number2, sum, sum);

    return 0;
}

