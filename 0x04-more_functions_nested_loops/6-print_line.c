#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: length of the number
 * Return: "_"
*/

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; leng < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
