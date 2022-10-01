#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

