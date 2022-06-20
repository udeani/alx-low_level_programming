/*
 * File: 0-memset.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * memset - fills memory with a constant byte b
 * @s: the pointer to the memory are to fill
 * @b: the character to fill memonry with.
 * @n: the number of bytes to fill.
 * Return: s.
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
