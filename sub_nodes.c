#include "monty.h"

/**
 * sub - subtracts the first 2 elements
 * @stack: Ha meeen
 * @lineCount: line # for the errors
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int sub;
	if (!stack || !*stack || !((*stack)->next))
	{
		freeAll(stack);
	fprintf(stderr, "L%d: can't sub, stack too short\n", lineCount);
	exit(EXIT_FAILURE);
	}
	temp = *stack;
	sub = temp->next->n - temp->n;

	pop(stack, lineCount);
	(*stack)->n = sub; /* we reassign after the pop off */
}

