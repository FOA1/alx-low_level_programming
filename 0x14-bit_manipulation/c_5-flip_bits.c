#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 *		you would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, i = 0;

	i = n ^ m;
	for (; i != 0; i = i >> 1)
		count += i & 1;
	return (count);
}
