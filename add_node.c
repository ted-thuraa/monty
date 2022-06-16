#include "monty.h"

/**
 * add_node - combines the first two elements
 * @stack: pointer to pointer to stack
 * @linecount: tracks line count for errors
 *
 * Return: void
 */
void add_node(stack_t **stack, unsigned int linecount)
{
	stack_t *temp = NULL;
	int sum = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		freeAll(stack);
		fprintf(stderr, "L%d: stack too short\n", linecount);
		exit(EXIT_FAILURE);
	}
	/* so we combine the first 2 n values into sum */
	temp = *stack;
	sum = temp->n + temp->next->n;

	pop(stack, linecount);
	(*stack)->n = sum;/* after removing the top stack reasign the sum to current top stack */
}

