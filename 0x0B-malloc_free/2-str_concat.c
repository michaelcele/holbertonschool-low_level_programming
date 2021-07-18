#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 * *str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL if str is NULL if no return pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	str = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (!str)
		return (NULL);

	if (str)
	{
		int i = 0, j = 0, k = 0;

		while (s1[i] != '\0')
		{
			str[j++] = s1[i++];
		}
		while (s2[k] != '\0')
			str[j++] = s2[k++];

		str[j++] = s2[k++];
	}

	return (str);
}
