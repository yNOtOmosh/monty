#include "monty.h"

/**
 * f_mod - works out the reminder of the division of the second
 * top element of the stack by the top element
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	
	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}


	(*head)->next->n %= (*head)->n;
	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
}
}
