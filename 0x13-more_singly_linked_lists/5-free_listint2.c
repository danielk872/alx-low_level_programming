#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - for freeing a list
 * @head: the head list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		ptr = ptr->next;

		free(*head);
		*head = ptr;
	}
}
