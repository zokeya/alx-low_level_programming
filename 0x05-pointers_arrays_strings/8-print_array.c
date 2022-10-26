#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * Numbers must be separated by comma, followed by a space
 * @a: int param
 * @n: number of elements of the array to be printed
 * Return: void
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}

	printf("\n");
}
