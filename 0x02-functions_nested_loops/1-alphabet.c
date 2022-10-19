#include "main.h"

/**
 * main -  prints the alphabet, in lowercase
 * Return: 0 Always
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	putchar('\n');
}
