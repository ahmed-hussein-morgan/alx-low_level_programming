#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

void print_error_and_exit() {
    printf("Error\n");
    exit(98);
}

void check_valid_number(char *num);

void multiply(char *num1, char *num2);

void check_valid_number(char *num) {
    int i;
    for (i = 0; num[i] != '\0'; i++) {
        if (!isdigit(num[i])) {
            print_error_and_exit();
        }
    }
}

void multiply(char *num1, char *num2) {
    int len1 = strlen(num1), len2 = strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));
    int i, j, carry, sum;
    for (i = len1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            result[i + j + 1] = sum % 10;
            carry = sum / 10;
        }
        result[i + j + 1] = carry;
    }
    i = 0;
    while (i < len1 + len2 - 1 && result[i] == 0) {
        i++;
    }
    for (; i < len1 + len2; i++) {
        printf("%d", result[i]);
    }
    printf("\n");
    free(result);
}

int main(int argc, char **argv) {
    if (argc != 3) {
        print_error_and_exit();
    }
    check_valid_number(argv[1]);
    check_valid_number(argv[2]);
    multiply(argv[1], argv[2]);
    return 0;
}
