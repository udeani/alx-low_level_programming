/*
 * File: 1-memcpy.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _memcpy - copies some bytes from memory area to another
 * @dest: new area to paste mem
 * @src: mem to copy
 * @n: number of bytes to copy
 * Return: a pointer to dest, *dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n != 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}
