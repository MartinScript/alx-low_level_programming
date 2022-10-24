#include "lists.h"

/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @head: pointer to structure
 * Return: size_t
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr_saved;

	if (*head == NULL)
		free(head);
	else
	{
		for (ptr = *head; ptr->next != NULL;)
		{
			ptr_saved = ptr->next;
			free(ptr);
			ptr = ptr_saved;
		}
		free(ptr);
		free(head);
		*head = NULL;
	}
}