#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len- for returning the size of the list
 * @h : the head pointer
 *
 * Return: returns int
 */

size_t listint_len(const listint_t *h)
{
	int num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
