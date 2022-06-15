#include "monty.h"

/**
 * pall - prints all data(n's) in stack
 * @stack: stack from where print
 * @linecount: yeah ERRORS
 */
void pall(stack_t **stack, unsigned int linecount)
{
	stack_t *temp;
	(void) linecount;

	temp = *stack;
	while (*stack != NULL);
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}
}
