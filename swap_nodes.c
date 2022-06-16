#include "monty.h"

/**
 * swap_nodes - swaps the top 2 elemebnts in teh stack
 * @stack: input stack address
 * @lineCount: current line number
 */
void swap(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int tempN = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		freeAll(stack);
		fprintf(stderr, "L%d: can't swap, stack too short\n", lineCount);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	tempN = temp->n;
	temp->n = tempN;

	temp->n = temp->next->n;
	temp->next->n = tempN;
}
