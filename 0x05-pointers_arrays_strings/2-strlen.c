
#include "main.h"

/**
 * _strlen -  -  returns the length of a string
 * @s: char parameter
 * Return: 0 on success
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\')
	{
		len++;
		s++;
	}

	return (len);
}
