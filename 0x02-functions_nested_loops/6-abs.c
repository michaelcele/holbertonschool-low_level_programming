#include "holberton.h"
/**
 * _abs- return absolute value of integer
 *
 * @n: integer
 *
 * Return: return absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{

		return (n * -1);
	}

	else
	{
		return (n * 1);
	}

}
