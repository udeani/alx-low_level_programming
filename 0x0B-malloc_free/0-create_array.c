/*
 * File: 0-create_array.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * create_array - function to create an array of chars.
 * @size: the size of the char to initialize
 * @c: the char to initialize.
 * Return: char buffer initialized.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
