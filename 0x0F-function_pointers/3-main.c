#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - the main entry of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero
 */
int main(int argc, char **argv)
{
	int a = 0, b = 0, sum = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
			*argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	sum = (*get_op_func(argv[2]))(a, b);

	printf("%d\n", sum);

	return (0);


}
