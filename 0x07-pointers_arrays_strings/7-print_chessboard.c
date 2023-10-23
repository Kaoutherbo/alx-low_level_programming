#include "main.h"

/**
 * _print_chessboard -  function that prints the chessboard.
 * @a: Prameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0 ; i < 8 ; i++)
{
for (j = 0 ; j < 8 ; j++)
    _putchar(a[i][j]);
_putchar('\n');
}
}
