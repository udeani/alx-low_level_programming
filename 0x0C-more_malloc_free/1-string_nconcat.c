/*
 * File: 1-string_nconcat.c
 * Auth: udeani henry
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatonates two strings at n inputed number of bytes.
 * @s1: the first string
 * @s2: the second string
 * @n: max number of of bytes of s2 to join to s1
 * Return: NULL upon failure
 *     else a pointer to the concatonated value.
 */

char *string_nconcat(cahr *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
