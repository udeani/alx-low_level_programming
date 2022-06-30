/*
 * File: 0-malloc_checked.c
 * Auth: Udeani henry
 */

#include "main.h"

/**
 * malloc_checked - function to allocate memory using malloc.
 * @b: positive value to allocate.
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return(mem);
}
