#include "holberton.h"
/**
 * _islower- Return 1 if c is lowercase
 *
 * @c: is lowercase or other thing
 *
 * Return: return 1 if lowercase 0 if other thing
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else if (c >= 65 && c <=90)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
