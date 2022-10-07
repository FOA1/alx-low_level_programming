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
	char **p1 **p2;

	if (ac != 3)
	{
		printf("Error\n");
		exit (98);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (!isdigit(av[i][j]))
			{
				printf("Error\n");
				exit (98);
			}
		}
	}
	
	p1 = malloc(_strlen(av[1]) + 1);
	if (p[1] == NULL)
		return (NULL);
	p2 = malloc(_strlen(av[1]) + 1);
	if (p[2] == NULL)
		return (NULL);

	p3 = malloc(atoi(p1) * atoi(p2))
	return (*p3);
}
/**
 *
 *
 *
 *
 *
 */
int main (int argc, char **argv)
{

	return (0);
}
