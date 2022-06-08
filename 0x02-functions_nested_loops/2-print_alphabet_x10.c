/*
 * File: 2-print_alphabet_x10.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int letter_set;
	int letters;
	for (letter_set = 0; letter_set < 10; letter_set++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
	}
	_putchar('\n');
	return(0);
}
