#include "main.h"
/**
 * _islower - Write a function that checks for lowercase.
 * @c: The character to check
 *
 * Return: Always Success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	return (0);
}
