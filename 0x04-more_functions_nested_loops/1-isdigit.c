#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 if not
*/

int _isdigit(int c)
{
	int n = 0;

	if (c >= '0' && c <= '9')
	{
		n = 1;
	}

	return (n);
}
