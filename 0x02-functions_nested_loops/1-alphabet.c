#include "main.h"
/**
 * main - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}

	_putchar('\n');
	return (0);
}
