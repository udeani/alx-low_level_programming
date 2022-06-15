/*
 * File: 1-strncat.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * *_strncat - function to concat two strings
 * @dest: string to append to
 * @src: string to add
 * @n: number of byte from src to append
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
