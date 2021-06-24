#include "holberton.h"
/**
 * _isdigit  - return 1 if c is a digit 0 if c is other thing
 * @c: is a character
 * Return: 1 if c is a digit 0 if c is other thing
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
