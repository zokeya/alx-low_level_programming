#include "main.h"

/**
 * _strlen - count array
 * @s: the array
 * Return: 1
*/

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string param
 * @s2: second string param
 * Return: pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dis + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}
	return (ddst);
}
