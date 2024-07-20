#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <netinet/in.h>
#include "read_num.h"

void error(const char *msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}

uint32_t read_num(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        error("Error opening file");
    }

    uint32_t number;
    size_t bytes_read = fread(&number, sizeof(uint32_t), 1, file);
    if (bytes_read != 1) {
        fclose(file);
        error("Error reading number from file");
    }

    fclose(file);
    return ntohl(number); 
}

