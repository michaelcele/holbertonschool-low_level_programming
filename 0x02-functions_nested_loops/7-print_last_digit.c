#include "holberton.h"
/**
 * print_last_digit - print last digit of n
 * @n: is integer
 * Return: i
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (n < 0)
	{
		i = i * -1;
	}

	_putchar('0' + i);

	return (i);
}
