#include "lists.h"

/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to structure
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int count = 0;

	if (h == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	for (ptr = h; ptr->next != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		count++;
	}
	printf("%d\n", ptr->n);
	count++;
	return (count);
}