#include "monty.h"

/**
 * div_nodes - divides nodes
 * @stack: our stack
 * @linecount: for errors
 *
 * Return: void
 */
void div_nodes(stack_t **stack, unsigned int linecount)
{
	stack_t *temp;
	int div;
	if (!stack || !*stack || !((*stack)->next))
	{
		freeAll(stack);
		fprintf(stderr, "L%d: can't div, stack too short\n", lineCount);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		freeAll(stack);
		fprintf(stderr, "L%d: division by zero\n", lineCount);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	div = temp->next->n / temp->n;

	pop(stack, lineCount);
	(*stack)->n = div;
}
