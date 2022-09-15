#include "main.h"

/**
 * print_triangles - Prints square to form triangle pattern the screen using #
 *
 * @size: the number of times # will be printed.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size)
				{
					for (k = 0; k < size - 1; k++)
						_putchar(' ');
						_putchar('#');
			}
			_putchar('\n');
		}
	}
}
