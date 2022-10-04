#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 *		space in memory, which contains a copy of the string given as a parameter.
 * @str: The given string
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, len1 = 0, len2 = 0, totLen = 0;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	 for (i = 0; s2[i] != '\0'; i++)
		 len2++;

	totLen = len1 + len2;
	p = (char *) malloc(totLen + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(p + i) = s1[i];
	for (i = 0; i < len2; i++)
		*(p + len1 + i) = s2[i];

	return (p);
}
