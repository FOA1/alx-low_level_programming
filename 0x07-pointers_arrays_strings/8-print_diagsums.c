#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - sums the two diagonals of a square matrix
 *
 * @a: the required matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;
	int *p;

	p = &a[i][j];

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + *p[i][j];
			if (i + j == size)
				sum2 = sum2 + *(p + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
