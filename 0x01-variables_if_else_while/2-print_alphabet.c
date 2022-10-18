#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, followed by a new line.
 * Return: 0
*/
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
