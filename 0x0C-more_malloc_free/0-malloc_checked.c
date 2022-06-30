/*
 * File: 0-malloc_checked.c
 * Auth: Udeani henry
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory using malloc.
 * @b: positive value to allocate.
 * Return: a pointer to the memory allocated.
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
