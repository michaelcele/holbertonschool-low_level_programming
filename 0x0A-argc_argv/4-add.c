#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add numbers
 * @argc: counter
 * @argv: vals
 * Return: 1 if the program find something dif than a int
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	while (--argc)
	{
		argv++;
		for (i = 0; (*argv)[i]; i++)
		{
			if (!isdigit((*argv)[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(*argv);
	}
	printf("%d\n", sum);
	return (0);

}
