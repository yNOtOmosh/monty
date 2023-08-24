#include "monty.h"

/**
 * f_sub - this subtracts the top element of the stack from
 * the second top element
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n -= (*head)->n;
	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
}
