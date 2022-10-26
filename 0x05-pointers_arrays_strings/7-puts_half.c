#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string param
 * Return: void
*/

void puts_half(char *str)
{
	int hs = 0, n;

	while (str[hs] != '\0')
	{
		hs++;
	}
	if (hs + 1 % 2 != '0')
	{
		n = (hs - 1) / 2;
	}
	else
	{
		n = (hs / 2)
	}
	n++;

	for (hs = n; str[hs] != '\0'; hs++)
		_putchar(str[hs]);
	_putchar('\n');
}
