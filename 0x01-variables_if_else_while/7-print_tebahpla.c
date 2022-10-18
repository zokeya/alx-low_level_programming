#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse using putchar
 * Return: 0 always
*/
int main(void)
{
	char ra;

	for (ra = 'z'; ra >= 'a'; ra--)
	{
		putchar(ra);
	}
	putchar('\n');

	return (0);
}
