#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)
{
	int tn;
	char ch;

	for (tn = 0; tn ,= 9; tn++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
