#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Entry point
 * @ptr: void *
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size && new_size)
		return (ptr);
	else
		return (NULL);
}
