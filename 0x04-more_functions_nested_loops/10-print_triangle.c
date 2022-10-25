#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: void
*/

void print_triangle(int size)
{
	int base, len, height;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (base = 1; base <= size; base++)
		{
			for (height = size - base; heigt >= 1; height--)
			{
				_putchar(' ');
			}
			for (len = 1; len <= base; len++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
