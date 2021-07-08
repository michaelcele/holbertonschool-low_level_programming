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


	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
