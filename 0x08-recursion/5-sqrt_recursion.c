#include "main.h"

/**
 * _evaluate - checks for the square root
 * @a: int param
 * @b: int param
 * Return: int
*/
int _evaluate(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (_evaluate(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int param
 * Return: int
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_evaluate(1, n));
}
