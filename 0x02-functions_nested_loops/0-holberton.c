#include "holberton.h"

/**
*Main - print the word holberton
*
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
