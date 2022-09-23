#include "main.h"
/**
 * infinite_add - add two large numbers using string and store their
 * sum to the string r. it then return r
 * 
 * @n1: the first number
 * @n2: the second number
 * @r: the string holding the result
 * @size_r: the size of r
 *
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
{
	int i, j, ln1, ln2, sum, carry;
	char tempSum = "";

	for (i = 0, n1[i] != '\0'; i++)
		ln1 = i + 1;
	for (i = 0, n2[i] != '\0'; i++)
		ln2 = i + 1;
	if (ln1 <= ln2)
	{
		for (i = ln1 - 1; i >= 0; i--)
		{
			sum = (n1[i] - '0') + (n2[i] - '0') + carry;
			tempSum[i] = (sum % 10) + '0';
			carry = sum / 10;
		}
		for (j = i; j >= 0; j--)
		{

		}
	}
