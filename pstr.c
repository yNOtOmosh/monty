#include "monty.h"

/**f_ pstr - prints the string starting at the top of the stack
 * @head: pointer to the top of the stack
 * @counter: line number of the command
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	(void)counter;

	while (current != NULL && current->n != 0 && current->n >= 0 && current->n <= 127)
	{
		if (isascii(current->n))
		{
			putchar(current->n);
		}
		else
		{
			break;
		}
		current = current->next;
	}
	putchar('\n');
}
