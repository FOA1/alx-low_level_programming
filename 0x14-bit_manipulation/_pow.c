#include "main.h"
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
