#include <stdio>
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

	printf("1");
	for (n = 2; n <=  100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			print("%d", n)
	}
	printf("\n");
	return (0);
}
