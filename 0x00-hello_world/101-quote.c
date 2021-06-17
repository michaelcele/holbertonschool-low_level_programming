#include<stdio.h>
/**
 * main - prints string
 * Return: 0
 */
int main(void)
{
	char Myfirst[] = "and that piece of art is useful\" - Dora Korpar,\
2015-10-19\n";
	int i = 0;

	while (Myfirst[i])
	{
		putchar(Myfirst[i++]);
	}

	return (1);
}
