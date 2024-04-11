#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - for summing the list data
 * @head: the head pointer
 *
 * Return: int data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	sum = 0;
	ptr = head;
	if (!head)
	{
		return (0);
	}

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
