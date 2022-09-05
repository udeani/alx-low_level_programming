/*
 * File: 5-string_toupper.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * string_toupper - converts any given string to upper case
 * @string: the string to convert
 * Return: returns string
 */

char *string_toupper(char *string)
{
	int n = 0;

	while (string[n])
	{
		if (string[n] >= 'a' && string[n] <= 'z')
			string[n] -= 32;
		n++;
	}
	return (string);
}
