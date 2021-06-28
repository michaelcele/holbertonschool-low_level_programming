#include "holberton.h"
/**
 * swap_int  - change the value of two integers
 *
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;

	*a = *b;

	*b = p;
}
