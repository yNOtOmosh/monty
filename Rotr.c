#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *last, *secondLast;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}

	secondLast = last->prev;

	last->prev = NULL;
	last->next = *head;
	(*head)->prev = last;

	*head = last;
	secondLast->next = NULL;
}
