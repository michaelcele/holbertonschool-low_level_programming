#include "holberton.h"
/**
 * more_numbers  - print numbers of 0 to 9, 10 times.
 *
 */
void more_numbers(void)
{

	int j = 0;

	while (j <= 9)
	{
		char i = '0';

		while (i <= '9')
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
	j++;
	}
}
