#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - for deleting the head node
 * @head: the head node
 *
 * Return: returns 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
