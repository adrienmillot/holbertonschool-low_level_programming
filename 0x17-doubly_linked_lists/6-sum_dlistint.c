#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list
 *
 * @head: first element
 *
 * Return: the sum of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (head->n);
	else
		return (sum_listint(head->next) + head->n);
}
