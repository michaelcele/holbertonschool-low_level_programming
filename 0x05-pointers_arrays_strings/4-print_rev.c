#include "holberton.h"
/**
 * print_rev  - Print string
 *
 * @s: String
 *
 */
void print_rev(char *s)
{
	int i = 0;
	char c = s[0];

	while (c != '\0')
	{
		c = s[++i];
	}

	while (i-- > 0)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');

}
