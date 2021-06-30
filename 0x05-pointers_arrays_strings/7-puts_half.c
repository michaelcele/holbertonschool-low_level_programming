#include "holberton.h"
/**
 * puts_half  - Print half of a string
 *
 * @str: String
 *
 */
void puts_half(char *str)
{
	int i = 0;
	char c;

	while (c != '\0')
	{
		c = str[i++];
	}

	if (c == '\0')
	{
		c = str[i / 2];
		i = i / 2;

		while (c != '\0')
		{
			c = str[i++];
			_putchar(c);
		}
	}
	_putchar('\n');

}
