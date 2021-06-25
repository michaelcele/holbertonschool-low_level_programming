#include "holberton.h"
/**
 * more_numbers  - print numbers of 0 to 14, 10 times.
 *
 */
void more_numbers(void)
{

	char i[] = "01234567891011121314\n";
	int k = 0;

	while (k <= 9)
	{
		int j = 0;

		while (i[j])
		{
			_putchar(i[j++]);
		}
		k++;
	}

}
