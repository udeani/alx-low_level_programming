/*
 * File: 0-memset.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed to by s
 *         with a constant byte b
 * @s: the pointer to the memory are to fill
 * @b: the character to fill memonry with.
 * @n: the number of bytes to fill.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n>0)
	{
		s[n-1] = b;
		n--;
	}
	return (s);
}