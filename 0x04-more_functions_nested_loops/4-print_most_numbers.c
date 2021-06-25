#include "holberton.h"
/**
 * print_most_numbers  - print numbers of 0 to 9 excluding the 2 and 4
 *
 */
void print_most_numbers(void)
{

	char i[] = "01356789\n";
	int j = 0;

	while (i[j])
	{
		_putchar(i[j++]);
	}

}
