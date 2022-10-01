#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isnumber - checks whether an input is number or not
 * @number - the input
 *
 * Return: true or false
 */
int isnumber(char number[])
{
	int k = 0;

	for (k = 0; number[k] != '\0'; k++)
	{
		if (isdigit(number[k]))
			return (0);
	}
	return (1);
}

/**
 * main - a program that prints the arguments passed into it.
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
				if (isnumber(argv[i]))
				{
					printf("Error\n");
					return (1);
				}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
