#include "monty.h"

/**
 * mod_nodes - computes the rest of the division of the second top element of the stack by the top element of the stack.
 * @stack: stack from which to mod
 * @linecount: this is now getting out of hand
 *
 * Return: void
 */
void mod_node(stack_t **stack, unsigned int linecount)
{
	stack_t *temp;
	int modded = 0;

	if (!stack || !*stack || !(*stack)->next)
	{
		freeAll(*stack);
		fprintf (stderr, "L%d: can't mod, stack too short\n", linecount);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		freeAll(stack);
		fprintf(stderr, "L%d: division by zero\n", lineCount);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	modded = temp->next % temp->n;

	pop(stack, linecount);
	(*stack)->n = modded;
}
