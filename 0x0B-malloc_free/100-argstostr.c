#include "main.h"
#include <stdlib.h>
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

	p = (char **) malloc(ac * 8 + 4);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		*(p + i) = av[i];
	return (*p);
}
