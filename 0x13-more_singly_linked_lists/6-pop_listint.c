#include "lists.h"

/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @head: pointer to structure
 * Return: size_t
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *ptr_saved;
	int n;

	if (*head == NULL)
		return (0);
	else
	{
		ptr = *head;
		ptr_saved = ptr->next;
		n = ptr->n;
		free(ptr);
		*head = ptr_saved;
		return (n);
	}
}