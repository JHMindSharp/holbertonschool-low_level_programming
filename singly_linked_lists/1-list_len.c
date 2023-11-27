#include "lists.h"

/**
 * list_len - fonction qui affiche le nombre d'elements dans la liste list_t.
 * @h: pointeur qui pointe la fin du noeud.
 *
 * Return: la longueur de list_t.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
