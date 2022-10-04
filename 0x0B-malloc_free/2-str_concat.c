#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: a pointer to the combined strings, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, len1 = 0, len2 = 0, totLen = 0;
	char *p;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	}

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL && s2 == NULL)
	{
		p = (char *) malloc(len1 + 1);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < len1; i++)
			*(p + i) = s1[i];
		return (p);
	}

	if (s1 == NULL && s2 != NULL)
	{
		p = (char *) malloc(len2 + 1);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < len2; i++)
			*(p + i) = s2[i];
		return (p);
	}

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
