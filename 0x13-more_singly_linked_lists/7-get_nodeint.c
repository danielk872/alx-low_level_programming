#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "1-listint_len.c"

/**
 * get_nodeint_at_index - for getting to a node at any pos
 * @head: the head pointer
 * @index: the nth node
 *
 * Return: returns the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int num;
	unsigned int len;

	num = 0;
	ptr = head;

	if (!head)
	{
		return (NULL);
	}

	len = listint_len(head);

	if (index > len)
	{
		return (NULL);
	}

	while (num != index)
	{
		ptr = ptr->next;
		num++;
	}

	return (ptr);
}
