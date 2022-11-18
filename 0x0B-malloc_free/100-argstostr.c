#include "main.h"
#include <stdlib.h>

/**
 * _strlen - prints the length of a string
 * @s: the sting whose length is to be printed
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
/**
 * argstostr - a function that concatenate its arguments
 * @ac: Acount of the supplied arguments
 * @av: Array of pointers to the arguments
 *
 * Return: a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, len = 0;
	char **p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		av[i][j] = '\n';
	}
	/* int _strlen(char *s) */
	p = (char **) malloc((ac + 1) * 8);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		p[i] = (char *) malloc(_strlen(av[i]) + 1);
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			(p[i][j]) = av[i][j];
	}
	return (*p);
}
