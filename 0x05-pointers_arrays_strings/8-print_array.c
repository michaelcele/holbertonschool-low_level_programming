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
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", *(a + i));
	if (i == (n - 1))
		break;
	printf("%d\n", *(a + i));
}
