#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char holbi[] = "Holberton\n";
	int i = 0;

	while (holbi[i])
	{
		_putchar(holbi[i++]);
	}

	return (0);
}
