#include "main.h"

/**
 * _strcmp - compares the values of strings
 * @s1: string one
 * @s2: string two
 * Return: 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
