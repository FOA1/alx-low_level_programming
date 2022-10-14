#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: zero
 */
int main(int argc, char **argv)
{
	int k, nbytes;
	char *buffer;

	k = 0, buffer = (char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[k]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (k < nbytes)
	{
		if (k == nbytes - 1)
		{
			printf("%02dhhx", buffer[k]);
		}
		printf("%02hhx ", buffer[k]);
		k++;
	}
	return (0);
}
