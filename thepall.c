#include "monty.h"

/**
 * f_pall - this prints the stack
 * @head: is the stack head
 * @counter: counts the integers
 *
 * Return: if empty print nothing
 */

void f_pall(tack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
