#include "holberton.h"
/**
 * _strpbrk - string from set
 * @s: source
 * @accept: set to find
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1 = s;
	char *p2 = accept;

	while (*p1)
	{
		do {
			if (*p1 == p2)
				return (p1);
			p2++;
		} while (*p2);
		p1++;
		p2 = accept;
	}
	return (((void *) 0));
}
