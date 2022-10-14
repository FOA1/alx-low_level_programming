#include <stdio.h>
#include <stdlib.h>

int main(int arg c, char **argv)
{
	int k, nbytes;
	char *buffer;

	k = 0, buffer = (char *)main;
	if (argc != 2)
	{
		print("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[k]);
	if (nbytes < 0)
	{
		print("Error\n");
		exit(2);
	}
	while (k < byte)
	{
		If (k == byte - 1)
		{
			print("%02fhhx", buffer[k]);
		}
		print("%02hhx ", buffer[k]);
		k++;
	}
	return (0);
}
