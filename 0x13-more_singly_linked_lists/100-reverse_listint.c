#include "lists.h"
/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to structure
 * Return: size_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	previous->next = NULL;

	while ((*head)->next != NULL)
	{
		previous = *head;
		current = (*head)->next;
		current->next = previous;
	}
	return (*head);
}