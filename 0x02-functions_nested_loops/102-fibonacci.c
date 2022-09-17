#include <stdio.h>
/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int prev_num = 1,
		pre_prev_num = 0,
		new_num = 0;

	for (i = 1; i <= 50; i++)
	{
		new_num = prev_num + pre_prev_num;
		pre_prev_num = prev_num;
		prev_num = new_num;
		if (i == 50)
		{
			printf("%ld", new_num);
			continue;
		}
		printf("%ld, ", new_num);
	}
	printf("\n");
	return (0);
}
