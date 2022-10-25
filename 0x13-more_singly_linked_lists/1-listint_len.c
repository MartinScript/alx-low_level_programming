#include "lists.h"

/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to structure
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (count);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (count);

	for (ptr = h; ptr->next != NULL; ptr = ptr->next)
	{
		count++;
	}
	count++;
	return (count);
}