#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character param to print
 * Return: 1 on success
 * On errow, retun -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
