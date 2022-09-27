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
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + *(a[i] + j);
			if (i + j == size)
				sum2 = sum2 + *(a[i] + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
