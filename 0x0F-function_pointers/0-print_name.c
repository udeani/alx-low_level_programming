/*
 * File: 0-function_pointers.c
 * Auth: Udeani henry
 */

#include "function_pointers.h"

/**
 * print_name - funtion to print the name
 * @name: the nme of file to print
 * @f: pointer to the file that prints a name i.e checker file main.c
 */

void print_name(char *name, void (*f)(char *))
{
	if ( name == NULL || f == NULL)
		return;
	else
		f(name);
}
