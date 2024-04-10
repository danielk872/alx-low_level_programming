#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - for adding a node at the end of the list
 * @head: the head pointer
 * @n : the int data
 * Return: returns 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *ptr;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (!node)
	{
		free(node);
		return (NULL);
	}
	ptr = *head;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}

	return (node);
}
