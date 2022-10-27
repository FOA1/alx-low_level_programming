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


/**
 * binary_to_uint - converts binary to integer
 *
 * @b: the number to convert
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, p = 0, num = 0, k = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		k = (b[i]) - '0';
		if (k != 0 && k != 1)
			return (0);
		num = num + (k * (_pow(2, p)));
		p++;
		i--;
	}
	return (num);
}
