#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers of n to 98
 *@n: integer of entry point
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
		putchar('\n');
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
		putchar('\n');
	}
	else
	{
		printf("%d\n", n);
	}
}
