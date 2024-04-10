#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - used to free lists
 * @head: the head pointer
 * Return: returns void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

