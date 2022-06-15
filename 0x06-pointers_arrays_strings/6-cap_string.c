/*
 * File: 6-cap_string.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * cap_string - function to capitalize first letters of a
 *     word in a string.
 * @str: the string to capitalize
 * Return: str
 */

char *cap_string(char *str)
{
	int n = 0;

	char *temp = " \t\n,;.!?\"(){}";

	while (str[n])
	{
		while (!(str[n] >= 'a' && str[n] <= 'z'))
		{
			for (str[n] >= temp[0] && str[n] <= temp[12])
				str[n + 1] -= 32;
			n++;
		}
		n++;
	}
	return (str);
}
