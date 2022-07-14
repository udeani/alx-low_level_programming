/*
 * File: 0-print_list.c
 * Auth: Udeani henry
 */

#include "lists.h"
#include <stdio.h>
/**
 * print_list - function to print the list items and there size.
 * @h: the pointer to the listed list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
