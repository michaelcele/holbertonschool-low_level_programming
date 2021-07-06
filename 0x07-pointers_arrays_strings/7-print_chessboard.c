#include "holberton.h"

/**
 * print_chessboard - print chess
 * @a: pointer
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			printf("%c", a[j][i]);
		}
		printf("\n");
	}
}
