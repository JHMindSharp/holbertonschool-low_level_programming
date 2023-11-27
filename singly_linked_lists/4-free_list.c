#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Fonction qui libere la memoire attribuée a list_t.
 * @head : pointeur vers la tête de la liste.
*/
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
