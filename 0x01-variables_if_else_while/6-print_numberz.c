#include <stdio.h>

/**
 * main - Prints all single digit numbers
 * starting from 0 in base 10
 *
 * Return: Always 0.
 */
int main(void)
{
	int dgt;

	for (dgt = 0; dgt < 10; dgt++)
		putchar((dgt % 10) + '0');

	putchar('\n');

	return (0);
}
