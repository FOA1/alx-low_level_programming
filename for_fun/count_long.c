#include <stdio.h>
int main (void)
{
	long long int n = 123456789123456789;
	int len = 1;

	while (n / 10)
	{
		len++;
		n = n / 10;
	}

	printf("%d\n", len);

	return (0);
}

