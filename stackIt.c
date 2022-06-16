#include "monty.h"

/**
 * stackIt - function that stacks new data on the stack
 * @stack: told ya
 * @temp: the new node
 *
 * Return: none
 */
void stackIt(stack_t **stack, stack_t *temp)
{
	temp->n = atoi(world.argument); /* store the argument in n */
	if (!*stack) /* no stack exist. add temp as only element */
	{
		temp->prev = NULL;
		temp->next = NULL;
		*stack = temp;
	}
	else
	{
		/* add it to the top */
		(*stack)->prev = temp;
		temp->prev = NULL;
		temp->next = *stack;
		*stack = temp;
	}
}
