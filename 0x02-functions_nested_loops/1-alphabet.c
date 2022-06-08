#include "main.h"
/*
 * File: 1-alphabet.c
 * Auth: Udeani henry
 */
/**
 * print_alphabet - prints alphabet in lower case follwed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}

