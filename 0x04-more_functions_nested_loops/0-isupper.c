#include "holberton.h"
/**
 * _isupper  - return 1 if c is uppercase 0 if c is other thing
 * @c: is a character
 * Return: 1 if c is uppercase 0 if c is other thing
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
