#include <stdio.h>
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
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

