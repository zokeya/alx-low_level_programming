#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * if fails cause normal process termination with a status value of 98
 * @b: int param - allocated memory
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
