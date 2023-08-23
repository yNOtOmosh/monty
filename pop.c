#include "monty.h"

/**
 * f_pop - removes the top element of the stack
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = (*head)->next;

	if (*head != NULL)
		(*head)->prev = NULL;

	free(temp);
}
