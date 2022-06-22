/*
 * File: 2-strlen_recursion.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _strlen_recursion - function to retuurn the lenght of a string
 * @s: the string buffer to return
 * Return: the length o f the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len ++;
		len += _strlen_recursion(s+1);
	}
	return (len);
}
