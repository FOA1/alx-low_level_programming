#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 * @a: the first value
 * @b: the second value
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
