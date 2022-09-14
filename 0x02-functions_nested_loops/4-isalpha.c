#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabet.
 * @c: The character to check
 *
 * Return: Always Success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

	return (0);
}
