#include <stdio.h>
/**
 *  print_array - a function that prints the elements of an array
 *
 *  @a: the array to be taken
 *  @n: the number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
}
