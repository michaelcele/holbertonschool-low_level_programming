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
	int i = 0, a;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	else
	{
		
		a = atoi(argv[i + 1]) * atoi(argv [i + 2]);
		printf("%d\n", a);
	}
	
	return (0);
}
