#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0 always
*/

int main(void)
{
	int n;

	for (n = 1; n <=  100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%n", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
