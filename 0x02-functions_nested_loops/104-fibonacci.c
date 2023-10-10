#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    unsigned long fib1 = 1, fib2 = 1, nextFib;

    printf("%lu, %lu, ", fib1, fib2);

    for (int i = 3; i <= 98; i++) {
        nextFib = fib1 + fib2;
        printf("%lu", nextFib);

        if (i < 98) {
            printf(", ");
        }

        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");
    return 0;
}

