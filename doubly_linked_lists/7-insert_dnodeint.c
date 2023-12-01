#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}

	free(new_node);
	return (NULL);
}
