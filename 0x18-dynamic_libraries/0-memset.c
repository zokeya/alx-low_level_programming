#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:input
 * @b: char input
 * @n: int input
 * Return: pointer to memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
