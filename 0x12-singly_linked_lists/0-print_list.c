#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to struct list_t
 * Return: int
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int count = 0;

	if (h == NULL)
		return 0;

	for (ptr = h; ptr->next != NULL; ptr = ptr->next)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else

			printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
	}
	printf("[%d] %s\n", ptr->len, ptr->str);
	count++;
	return (count);
}
