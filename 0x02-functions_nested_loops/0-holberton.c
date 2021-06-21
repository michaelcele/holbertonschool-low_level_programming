#include "holberton.h"

/**
*print_alphabet_x10 - print the alphabet 10 times
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
