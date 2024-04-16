listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
   	 listint_t *ptr, *new_node;
   	 unsigned int num = 0, len = listint_len(*head);

    	if (!head || idx > len)
        	return NULL;

    	new_node = malloc(sizeof(listint_t));
    	if (!new_node)
        	return NULL;

    	new_node->n = n;
    	new_node->next = NULL;

    	if (idx == 0 || *head == NULL) {
        	new_node->next = *head;
        	*head = new_node;
        	return new_node;
    }

    	ptr = *head;
    	while (num < idx - 1) {
        	ptr = ptr->next;
        	num++;
    }

    	new_node->next = ptr->next;
    	ptr->next = new_node;

    	return new_node;
}
