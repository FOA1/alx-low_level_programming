#include "main.h"
#include <stdio.h>
/**
 * _pow - finds the power of a number
 *
 * @base: the base number
 * @pow: the power
 *
 * Return: the base raised to the power
 */
int _pow(int base, int pow)
{
	int pro = 1;

	while (pow > 0)
	{
		pro = pro * base;
		pow--;
	}
	return (pro);
}

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: the number provided
 * @index: the index bit to check
 *
 * Return: the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 0;

	bit = _pow(2, index);

	if ((n & bit) >= 1)
		return (1);
	if ((n & bit) == 0)
		return (0);
	return (-1);
}
