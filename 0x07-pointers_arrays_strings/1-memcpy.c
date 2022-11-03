#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory source
 * @dest: memory destination
 * @n: no. of copies
 * Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
