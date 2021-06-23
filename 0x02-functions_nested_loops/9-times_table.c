#include "holberton.h"
/**
 * times_table - print 9 times tables
 *
 */
void times_table(void)
{
	int i = 0, j, k;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			k = i * j;

			if (k < 10)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(k + '0');

			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
