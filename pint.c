#include "monty.h"

/**
 * f_pint - this prints the value at the top of the stack
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void F_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
