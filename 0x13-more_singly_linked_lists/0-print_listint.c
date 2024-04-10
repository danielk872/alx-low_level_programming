#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - for printing a list
 * @h: the head pointer
 * Return: returns 0
 */

size_t print_listint(const listint_t *h)
{
	int num;

	num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
