#include "main.h"
/**
 * _memcpy - fills memory with a constant byte.
 *
 * @dest: the string to copy to
 * @src: the char to copy
 * @n: the number of copies to be made
 *
 * Return: the string we copied in to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, len = 0;

	for (i = 0; src[i] != '\0'; i++)
		len++;

	if (len < 1 || n < 1)
		i = 0;
	else
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
