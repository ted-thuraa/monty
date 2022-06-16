#include "monty.h"

/**
 * print-top - prints the top int in the stack, converting to ascii
 * @stack: the data structure
 * @lineCount: used for error message
 *
 * Return: None it is bleh
 */
void print_top(stack_t **stack, unsigned int lineCount)
{
	if (!stack || !*stack) /* if stack is empty */
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lineCount);
		exit(EXIT_FAILURE);
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lineCount);
		freeAll(stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
