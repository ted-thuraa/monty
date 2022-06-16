#include "monty.h"

/**
 * mul_node - multiplies first two nodes
 * @stack: our stack
 * @linenumber: for errors
 *
 * Return: NULL
 */
void mul_nodes(stack_t **stack, unsigned int linecount)
{
	stack_t *temp;
	int mul;

	if (!stack || !*stack || !(*stack)->next)
	{
		freeALL(stack);
		fprintf(stderr, "L%d: can't mul, stack too short\n", linecount);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	mul = temp->n * temp->next->n;

	pop(stack, linecount);
	(*stack)->n = mul;
}
