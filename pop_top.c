#include "monty.h"

/**
 * pop_top - removes the top most stack
 * @stack: stack from which to pop
 * @linecount: we still tracking for errors
 *
 * Return: void
 */
void pop_top(stack_t **stack, unsigned int linecount)
{
	stack_t *temp = NULL;

	if (!stack || !*stack)
	{
		freeALL(stack)
		fprintf(stderr, "l%u: empty stack\n", linecount);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = *stack->next;
	if (*stack != NULL) /* because there could be no next node */
		(*stack)->prev = NULL;
	free(temp);
}
