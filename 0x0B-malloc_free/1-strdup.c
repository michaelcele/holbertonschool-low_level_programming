#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 * *_strdup - copy string and allocate new space in memory
 * @str: string to copy
 *
 * Return: NULL if str is NULL if no return pointer
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = (char *)malloc(strlen(str) + 1);
	if (!s)
		return (NULL);
	if (s)
		strcpy(s, str);

	return (s);
}
