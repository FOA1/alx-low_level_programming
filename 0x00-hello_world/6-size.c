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
	float f;
	long int li;
	long long int lli;

	printf("Size of a char is: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int is: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long) sizeof(li));
	printf("Size of a long long int is: %lu byte(s)\n", (unsigned long) sizeof(lli));
	printf("Size of a float is: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
