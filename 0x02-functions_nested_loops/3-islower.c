/*
 * File: 3-islower.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _islower - checks for lowercase of a character
 * @c: input from user or test file
 * Return: always 1 if true, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
