#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - len of a prefix substring
 * @s: - string
 * @accept: - group os characters
 * Return: len 
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *p1 = s, *p2 = accept;

	while (*p1)
	{
		while (*p2)
		{
			if (*p2 == *p1)
			{
				len++;
				break;
			}
			else
				p2++;
		}
		if (*p2)
		{
			p2 = accept;
			p1++;
		}
		else
			break;
	}

	return (len);
}
