/*
 * File: 2-strlen.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _strlen - returns the lenght of passed string in byte
 * @s: string to check the length
 * Return: int.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s!='\0')
	{
		i++;
		s++;
	}
	return (i);
}
