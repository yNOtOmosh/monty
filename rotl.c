#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *temp, *last;

	(void)counter;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}

	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}
