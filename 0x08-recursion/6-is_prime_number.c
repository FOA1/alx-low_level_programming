#include "main.h"
/**
 * is_prime_number - checks whether a given number is a prime number
 *
 * @n: the number to check
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
/**
 * is_prime - return 1 if n is prime
 * @n: The number to be checked
 * @start: The number to start from
 *
 * Return: 1 if n is prime or 0 if not
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
