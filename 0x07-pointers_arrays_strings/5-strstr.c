/*
 * File: 5-strstr.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _strstr - locates a substring
 * @havstack: the string to be searched
 * @needle: the substring to be located
 * Return: returns a pointer to the substring if located else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, point = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j])
					point = 1;
				else
					point = 0;
			}
		}
		if (point == 1)
			return (haystack + i);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}
