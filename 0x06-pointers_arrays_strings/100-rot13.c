#include "main.h"
/**
 * rot13 - encodes messages using the rot13 code
 * 
 * @s: the string to encode
 * Return: zero
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] > 'm' && s[i] <= 'z') || (s[i] > 'M' && s[i] <= 'Z'))
				s[i] = s[i] - 13;
			else
				s[i] = s[i] + 13;
		}
	}
	return (0);
}
