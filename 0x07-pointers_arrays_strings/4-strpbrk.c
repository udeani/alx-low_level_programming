/*
 * File: 4-strpbrk.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _strpbrk - function to search for a set of string
 * @a: the pointer to the string
 * @accept: the string
 * Return: a pointer s.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
