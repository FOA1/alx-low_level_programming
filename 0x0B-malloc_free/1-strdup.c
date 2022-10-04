#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 *		space in memory, which contains a copy of the string given as a parameter.
 * @str: The given string
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *p;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len == 0)
		return (NULL);

	p = (char *) malloc(len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(p + i) = str[i];
	return (p);
}
