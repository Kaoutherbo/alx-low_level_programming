#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int sum = 0;
    srand(time(NULL));

    while (sum < 2772)
    {
        char character = rand() % 95 + 32; 
        int remaining = 2772 - sum;

        if (character <= remaining)
        {
            putchar(character);
            sum += character;
        }
    }

    return 0;
}
