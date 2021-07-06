#include "holberton.h"
/**
 * _memcpy - copy the memory.
 *
 * @dest: pointer
 * @src: string
 * @n: bytes
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a != n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
