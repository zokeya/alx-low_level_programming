#include "main.h"

/**
 * factorial - returns the factorial of a given number n
 * @n: given number
 * Return: int
*/

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (i);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}

	return (x);
}
