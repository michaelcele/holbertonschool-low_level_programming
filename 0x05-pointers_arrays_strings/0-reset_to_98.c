#include "holberton.h"
/**
 * reset_to_98  - change the value of n for 98.
 *
 * @n: pointer of n
 */
void reset_to_98(int *n)
{
	int p = 98;
	int *p2;

	p2 = &p;

	*n = *p2;
}
