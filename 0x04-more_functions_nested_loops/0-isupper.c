#include "main.h"
/**
 * _isupper - Write a function that checks for lowercase.
 * @c: The character to check
 *
 * Return: Always Success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

	return (0);
}
