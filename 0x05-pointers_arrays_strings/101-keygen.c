#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/**
 * randomPassword - generates random passwords for the user
 *
 * @n: the length of the password
 */
void randomPassword(int n)
{
	int i = 0;
	int random = 0;

	char num[] = "0123456789";
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@$%^&*()_+=-?.,";
	char password[20];

	srand((unsigned int)(time(NULL)));
	
	random = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (random == 1)
		{
			password[i] = num[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2) 
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = upper[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = lower[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
/**
 * main _ the program that calls the function to
 * generate the password
 *
 * Return: always 0.
 */
int main()
{
	int n = 8;

	randomPassword(n);
	printf("\n");
	return 0;
}
