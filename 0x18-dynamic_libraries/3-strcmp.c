/*
 * File: 3-strcmp.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _strcmp - funct to compare two strings
 * @s1: first string
 * @s2: second string
 * Return: returns the difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
