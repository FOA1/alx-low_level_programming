#include "main.h"
/**
 * _abs - Write a function that prints
 * absolute value of numbers.
 *
 * @int: The number to check
 *
 * Return: Always Success
 */
int _abs(int)
{
	int num;

	if (num < 0)
		return (-num);
	else
		return (num);

	return (0);
}
