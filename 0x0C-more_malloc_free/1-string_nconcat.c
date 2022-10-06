#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings s1 and s2
 *
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to copy from s2
 *
 * Return: a pointer to the combined strings, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0, totLen = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if (n >= len2)
		totLen = len1 + len2;
	else
		totLen = len1 + n;

	p = malloc(totLen + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(p + i) = s1[i];
	for (i = 0; i < n; i++)
		*(p + len1 + i) = s2[i];
	*(p + len1 + n) = '\0';

	return (p);
}
