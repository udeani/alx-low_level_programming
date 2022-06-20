/*
 * File: 3-strspn.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _strspn - function to get the lenght fo a prefix substring
 * @s: the segment to return
 * @accpet: bytes to return
 * Return: the number of bytes in segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
