/*
 * File: 3-islower.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _islower - checks for lowercase of a character
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
