#include "main.h"
/**
 * _islower - Write a function that checks for lowercase.
 *
 * Return: Always Success
 */
int _islower(int c)
{
	char count = 'a';

	for (count = 'a'; count <= 'z'; count++)
	{
		if (c == count)
		{
			_putchar(1);
		}
	}
	for (count = 'A'; count <= 'Z'; count++)
	{
		if (c == count)
		{
			_putchar(0);
		}
        }
	
	return (0);
}
