#include "monty.h"

/**
 * print_string - prints the whole stack as ascii values
 * @stack: stack
 * @lineCount: for error message handling
 *
 * Return: none
 */
void pstr(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp;

	(void) lineCount; /* unused cause no errors.*/
	temp = *stack;
	while (temp)
	{
		if (temp->n > 0 && isascii(temp->n))
			printf("%c", temp->n);
		else
			break;
		temp = temp->next; /* next node */
	}
	printf("\n");
}
