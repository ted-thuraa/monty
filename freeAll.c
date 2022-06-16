#include "monty.h"

/**
 * freeALL - frees all baby
 * @h: right there do whatever you want
 *
 * Return: void
 */
void freeAll(stack_t **h)
{
	stack_t *temp = NULL;

	if (!h || !*h)
	{
		return; /* do you think its empty? */
	}

	while (*h != NULL)
	{
		temp = (*h);
		(*h) = (*h)->next;
		free(temp);
	}
}		
