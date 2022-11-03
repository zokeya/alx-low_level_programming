#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @needle : substring
 * @haystack: string
 * Return: pointer to substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystacck)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do
			{
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			}
			while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return ('\0');
}
