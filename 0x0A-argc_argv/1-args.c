#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: integer size of argv
 * @argv: array comand line arguments.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;


	while (i != argc - 1)
	{
		i++;
	}
	printf("%d\n", i);
	argv[0] = argv[i];

	return (0);
}
