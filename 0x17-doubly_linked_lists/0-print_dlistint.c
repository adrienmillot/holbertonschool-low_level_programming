#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: list to browse
 *
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	return (print_dlistint(h->next) + 1);
}
