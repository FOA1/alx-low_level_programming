#include "main.h"
/**
 * is_palindrome - checks a string if it is palindrome or not
 *
 * @s: the string to check
 * Return: 1 if it s palindrome or 0 if it is not
 */
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}
/**
 * check - checks if a string is palindrome or not
 *
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag: flag to indicate if a string is a palindrome
 *
 * Return: void
 */
void  check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}
/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string to check
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += (_strlen_recursion(s + 1));
	}
	return (count);
}
