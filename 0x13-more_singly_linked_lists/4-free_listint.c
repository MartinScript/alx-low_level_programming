#include "lists.h"

/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @head: pointer to structure
 * Return: size_t
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *ptr_saved;

	for (ptr = head; ptr->next != NULL;)
	{
		ptr_saved = ptr->next;
		free(ptr);
		ptr = ptr_saved;
	}
	free(ptr);
}