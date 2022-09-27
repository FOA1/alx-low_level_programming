#ifndef MAIN_H
#define MAIN_H

	#include <stdio.h>

	char *_memset(char *s, char b, unsigned int n);
	void simple_print_buffer(char *buffer, unsigned int size);
	char *_memcpy(char *dest, char *src, unsigned int n);
	char *_strchr(char *s, char c);
	char *_strstr(char *haystack, char *needle);
	void print_diagsums(int *a, int size);
	void print_chessboard(char (*a)[8]);
	int _putchar(char c);
	unsigned int _strspn(char *s, char *accept);
	char *_strpbrk(char *s, char *accept);
	void set_string(char **s, char *to);

#endif /* MAIN-H */
