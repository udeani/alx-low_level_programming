/*
 * File: 0-strcat.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * *_strcat - function that concats or joins two strings.
 * @*dest: string to append to
 * @src: string to join to dest
 * Return: returnsa pointer of string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
		j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = ('\0');

	return (dest);
}
