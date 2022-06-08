/*
 * File: 4-isalpha.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _isalpha - returns true if the letter is in ANSCII
 * @c: input from the user or test file
 * Return: i if true or 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
