#include <stdio.h>
#include <stdlib.h>
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
	int product = 0;

	if (argc != 3)
		printf("Error\n");
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}

	return (0);
}

