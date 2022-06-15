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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
