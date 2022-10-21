#include "lists.h"
#include <stdlib.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: pointer to struct list_t
 * Return - int
 */
void free_list(list_t *head)
{
	list_t *ptr, *ptr_saved;

	for (ptr = head; ptr->next != NULL; ptr = ptr->next)
	{
		ptr_saved = ptr->next;
		free(ptr);
		ptr = ptr_saved;
	}
	free(ptr);
}