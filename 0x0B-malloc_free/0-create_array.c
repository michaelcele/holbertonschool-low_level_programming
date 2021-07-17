#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: size of string
 * @c: char initializer
 *
 * Return: NULL if size is 0 or fails, or pointer array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(sizeof(char) * size);
	if (s == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	return (s);
}
