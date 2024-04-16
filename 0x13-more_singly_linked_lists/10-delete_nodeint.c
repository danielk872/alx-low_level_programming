#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include "1-listint_len.c"

/**
 * delete_nodeint_at_index - for deleting a node at the specified idx
 * @head: the head node;
 * @index: the index;
 *
 * Return: returns int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	unsigned int num;
	unsigned int len;

	len = listint_len(*head);
	num = 0;

	if (!head || *head == NULL)
	{
		return (-1);
	}

	if (index >= len)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (num != index)
	{
		prev = temp;
		temp = temp->next;
		num++;
	}
	
	prev->next = temp->next;
	free(temp);
	return (1);
}
