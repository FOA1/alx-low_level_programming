#include <stdio.h>
/* #include main.h */

/**
 * main - Prints Numbers from 1 to 100.
 * when it encounter multiples of 3, it prints fizz,
 * and buzz for multiples of 5.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	{
		for (i = 1; i <= 100; i++)
		{
			if ((i % 15) == 0)
			{
				printf("fizzBuzz");
				printf(" ");
				continue;
			}
			else if ((i % 3) == 0)
			{
				printf("Fizz");
				printf(" ");
				continue;
			}
			else if ((i % 5) == 0)
			{
				printf("Buzz");
				if (i == 100)
					continue;
				else
				{
					printf(" ");
					continue;
				}
			}
			else
			{
				printf("%d", i);
				printf(" ");
			}
		}
		printf("\n");
	}

	return (0);
}
