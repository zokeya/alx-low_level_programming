#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,then in uppercase, new line.
 * Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		purchar(ch);
	}
	putchar('\n');

	return (0);
}
