#include <stdio.h>

/**
 * main - Prints "Programming is like building a multilingual
 *                puzzle, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	double d;
	char c;
	printf("The size of an int is: %lu.\n", (unsigned long) sizeof(i));
	printf("The size of an double is: %lu.\n", (unsigned long) sizeof(d));
	printf("The size of a char is: %lu.\n", (unsigned long) sizeof(c));
	return (0);
}
