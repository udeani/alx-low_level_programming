/*
 * File: 9-strcpy.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * *_strcpy - copies a string including the null byte to another buffer
 * @src: string co copy
 * @dest: puffer to paste
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		dest[i] = src[i];
	if (src[i] == '\0')
		return (dest);
	i++;
	}
	return (dest);
}
