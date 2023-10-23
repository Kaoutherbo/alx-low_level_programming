#include "main.h"

/**
 * _print_chessboard -  function that prints the chessboard.
 * @a: Prameter to be checked
 *
 * Description: This function takes a 2D array 'a' representing a chessboard
 * configuration and prints it to the standard output.
 * The chessboard is printed
 * as a grid of characters, with each cell represented by a space or a chess
 * piece character.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
