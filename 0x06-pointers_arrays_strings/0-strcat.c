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

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
