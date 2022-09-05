/*
 * File: 6-puts2.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string to print
 */

void puts2(char *str)
{
	int temp = 0, len = 0;

	while (str[temp++])
		len++;

	for (temp = 0; temp < len; temp += 2)
		_putchar(str[temp]);

	_putchar('\n');
}
