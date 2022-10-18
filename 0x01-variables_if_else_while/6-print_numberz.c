#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
*/
int main(void)
{
	int nm;

	for (nm = 0; nm < 10; nm++)
	{
		putchar((nm % 10) + '0');
	}
	putchar('\n');

	return (0);
}
