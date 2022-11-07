#include "main.h"

/**
 * _evaluate - checks if int is prime
 * @a: int param
 * @b: int param
 * Return:int
*/
int _evaluate(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (_evaluate(a + 1, b));
}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: int parama
 * Return: int
*/

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (_evaluate(2, n));
}
