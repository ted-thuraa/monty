#include "monty.h"

/**
 * lineUp - stacks the temp in a queue. this is a FIFO
 * @stack: the doubly linked list data structure we pass
 * @temp: the node we want to add
 *
 * Return: none it is void
 */
void lineUp(stack_t **stack, stack_t *temp)
{
	stack_t *headTemp; /* use this to not modify stack */

	temp->n = atoi(world.argument);
	temp->next = NULL;
	if (!*stack)
	{
		temp->prev = NULL;
		*stack = temp;
	}
	else
	{
		headTemp = *stack;
		while (headTemp->next) /* loop to the end */
			headTemp = headTemp->next;
		headTemp->next = temp; /* add to the end */
		temp->prev = headTemp; /* link to previous */
	}
}
