#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer
 * @b: char
 * @n: bytes
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pt = s;

	while (n--)
	{
		*pt++ = b;
	}
	return (s);
}
