/*
 * File: 2-strncpy.c
 * Auth: Udeani henry
 */

#include "main.h"

/**
 * _strncpy - function to copy a given string
 * @dest: string buffer to copy
 * @src: source string
 * @n: max byte number
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
