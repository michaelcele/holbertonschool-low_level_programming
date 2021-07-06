#include "holberton.h"
/**
 * _strchr - search character.
 *
 * @c: find character
 * @s: string
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (*p == c)
		return (p);
	else
		return ((void *)0);
}
