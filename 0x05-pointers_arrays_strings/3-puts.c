#include "holberton.h"
/**
 * _puts  - Print string
 *
 * @str: String
 *
 * Return: i
 */
void _puts(char *str)
{
	int i = 0;
	char c = str[0];

	while (c != '\0')
	{
		_putchar(c);
		c = str[++i];
	}
	_putchar('\n');

}
