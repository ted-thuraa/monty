#include "monty.h"

/**
 * push - pushes data onto the stack
 * @stack: you gonna be feeding so much of this
 * @lineCount: used for error message handling
 * 
 * Return: void
 */
void push(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp;

	if (!stack) /* if we had no stack. this is diff than a !*stack */
		exit(EXIT_FAILURE);
	if ((isDigglet(world.argument)) == 0)
		integerError(stack, lineCount);
	temp = malloc(sizeof(stack_t));
	if (!temp) /* malloc error handler */
		mallocError(stack);
	if (world.dataType == 1)
		stackIt(stack, temp);
	else
		lineUp(stack, temp);
}
