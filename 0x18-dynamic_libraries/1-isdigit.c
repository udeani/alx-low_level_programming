/*
 * File: 1-isdigit.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _isdigit - Checks for a digit 0 t0 9.
 * @c: The the number to search for
 *
 * Return: 1 if true else 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
