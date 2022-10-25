#include "lists.h"

/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @head: pointer to structure
 * @int: number
 * Return: size_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
		{
		}
		ptr->next = new;
	}
	return (new);
}