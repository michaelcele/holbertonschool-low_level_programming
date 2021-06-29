#include "holberton.h"
/**
 * puts2  - Print every other character of a string
 *
 * @str: String
 *
 */
void puts2(char *str)
{
	int i = 0;
	char c;

	while (c != '\0')
	{
		if (i % 2 == 1)
		{
			_putchar(c);
		}

		c = str[i++];
	}
	_putchar('\n');

}
