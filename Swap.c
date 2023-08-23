#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *first, *second;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	first = *head;
	second = (*head)->next;

	first->prev = second;
	first->next = second->next;

	if (second->next != NULL)
		second->next->prev = first;

	second->prev = NULL;
	second->next = first;

	*head = second;
}
