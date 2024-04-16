#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "1-listint_len.c"
/**
 * insert_nodeint_at_index - for inserting node;
 * @head: the head pointer
 * @idx: the index
 * @n: the integer data
 * Return: returns 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int num;
	unsigned int len;
	listint_t *new_node;

	num = 0;
	len = listint_len(*head);
	if (!head || idx > len)
	{
		return (NULL);
	}
	ptr = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (num <  idx - 1)
	{
		ptr = ptr->next;
		num++;
	}

	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
