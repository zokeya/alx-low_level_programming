#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @a: string param
 * Return: char
*/

char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (*(a + i))
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			(a + i) -= 'a' - 'A';
		i++;
	}
	return (a);
}
