#include "holberton.h"
/**
 * print_numbers  - print numbers of 0 to 9
 *
 */
void print_numbers(void)
{

	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
