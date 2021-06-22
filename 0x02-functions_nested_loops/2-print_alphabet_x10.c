#include "holberton.h"
/**
 * print_alphabet_x10- Print to alphabet x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
		i++;
	}


}
