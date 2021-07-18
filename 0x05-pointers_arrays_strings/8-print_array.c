#include "holberton.h"
#include <stdio.h>
/**
 * print_array  - Print array
 * @a: String
 * @n: integer
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d\n", *(a + i));
			break;
		}
		printf("%d, ", *(a + i));
		i++;
	}
	if (n <= 0)
	{
		printf("\n");
		return;
	}
}
