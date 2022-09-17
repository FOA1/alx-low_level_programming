#include <stdio.h>
/**
 * main - prints the sum of the multiples
 * of 3 and 5 between 1 and 1024.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 15) == 0)
		{
			sum = sum + i;
			continue;
		}
		else if ((i % 5) == 0)
		{
			sum = sum + i;
			continue;
		}
		else if ((i % 3) == 0)
		{
			sum = sum + i;
			continue;
		}
		else
			continue;
	}
	printf("%d\n", sum);

	return (0);
}
