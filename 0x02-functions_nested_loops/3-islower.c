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
			return (1);
			break;
		}
		else
			return (0);
	}
	
	return (0);
}
