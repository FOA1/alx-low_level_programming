#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: the string to copy to
 * @b: the char to copy
 * @n: the number of copied to be made
 *
 * Return: the string we copied in to
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	if (len < 1 || n < 1)
		i = 0;
	else
	{
		for (i = 0; i < n; i++)
			s[i] = b;
	}
	return (s);
}
