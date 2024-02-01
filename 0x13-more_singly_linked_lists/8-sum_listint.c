#include "lists.h"

/**
 * sum_listint - function that sum lists
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
