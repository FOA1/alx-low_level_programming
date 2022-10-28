#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: the number whose bit we are setting
 * @index: the position of the bit to set
 *
 * Return: return 1 success or -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = ~(1 << index) & *n;
		if (n)
			return (1);
	}
	return (-1);
}
