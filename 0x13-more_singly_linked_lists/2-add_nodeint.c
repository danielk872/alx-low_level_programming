#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "lists.h"

/**
 * add_nodeint - for adding a node to the start of a list
 * @head: head pointer
 * @n: int data
 * Return: returns int
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

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

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
