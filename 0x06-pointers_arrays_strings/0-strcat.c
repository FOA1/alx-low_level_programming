#include "main.h"
/**
 * _strcat - Write a function that swaps the values of two integers.
 *
 * @dest: the first argument
 * @src: the second argument
 *
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, len_src = 0, len_dest = 0;
	/* char *p = dest; */

	for (i = 0; src[i] != '\0'; i++)
		len_src = i + 1;

	if (len_src <= 0)
		i = 0;
	else
	{
		for (i = 0; src[i] != '\0'; i++)
			len_dest = i + 1;
		for (i = 0; i <= len_dest; i++)
		{
			dest[len_dest + i] = src[i];
		}
	}
	dest[len_dest] = '\0';
	return (dest);
}
