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
	int a = 0, b = 0;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] && argv[2][0] != ('+' || '-' || '*' || '/' || '%'))
	{
		printf("Error\n");
		exit(99);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));

	return (0);
}
