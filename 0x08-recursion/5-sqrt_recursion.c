#include "main.h"
/**
 * _sqrt_recursion - finds the square root of a number
 *
 * @n: the number to check
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - finds the square root of a number
 * @n: the test number
 * @x: the squared number
 *
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}

