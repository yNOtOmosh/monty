#include "monty.h"

/**
 * f_queue - set the format of the data to a queue (FIFO)
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void f_queue(stack_t **head, unsigned int counter)
{
	stack_t *current = head;

	if (*head == NULL || bus.lifi == 1)
		return;

	while (current->next != NULL)
		current = current->next;

	current->next = *head;
	(*head)->prev = current;
	*head = (*head)->next;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;

	bus.lifi = 1;
}
