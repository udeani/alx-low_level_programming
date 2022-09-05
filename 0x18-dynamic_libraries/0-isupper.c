/*
 * File: 0-isupper.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase characters in a string.
 * @c: character to be checked.
 *
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
