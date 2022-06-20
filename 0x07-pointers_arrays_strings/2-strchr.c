/*
 * File: 2-strchr.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _strchr - a funct to locate a char in a string
 * @s: point of the string
 * @c: the char to locate
 * Return: a pointer to first c.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
			{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
