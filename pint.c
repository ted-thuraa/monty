#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @stack: our stack
 * @lineCount: line number for errors
 *
 * Return: none
 */
void pint(stack_t **stack, unsigned int lineCount)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", lineCount);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}
