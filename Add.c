#include "monty.h"

/**
 * f_add - adds the top two elements of a stack
 * @head: pointer to the top of stack
 * @counter: line number of the command
 */

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n += (*head)->n;
	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
}
