#include "monty.h"

/**
 * rotr - rotates the top of the stack to the bottom. a right shift
 * @stack: stack
 * @lineCount: for error messaages
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int lineCount);
{
	stack_t *left;
	stack_t *right;

	(void) lineCount;
	if (!stack || !*stack || !(*stack)->next)
		return;
	left = right = *stack;

	while (right->next) /* move the right pointer to the end */
		right = rigt->next;
	right->next = left; /* this creates a loop circly linked list */
	left->prev = right;
	*stack = right; /* new pointer is at the far end */
	(*stack)->prev->next = NULL; /* we cut off the connection btween last */
	(*stack)->prev = NULL; /* and the second last node */
}
