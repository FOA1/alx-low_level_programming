#include "main.h"

/**
 * print_triangle - Prints square to form triangle pattern the screen using #
 *
 * @size: the number of times # will be printed.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k, m = 1;

	for (i = size; i >= 1; i--)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= m; k++)
		{
			printf("#");
		}
	printf("\n");
	m++;
	}
}
