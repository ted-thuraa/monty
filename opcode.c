#include "monty.h"

/**
 * opcode = checks if string is an opcde
 * @stack: pointer of pointer to stack
 * @string: the argument or string or opcode
 * @linecount: yeah we still tracking it for error messages
 *
 * Return: void
 */

void opcode(stack_t **stack, char *string, unsigned int linecount)
{
	int i = 0;
	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop_top},
		{"swap", swap_nodes},
		{"add", add_nodes},
		{"nop", nop},
		{"sub", sub_nodes},
		{"div", div_nodes},
		{"mul", mul_nodes},
		{"mod", mod_nodes},
		{"pchar", print_char},
		{"pstr", print_string},
		{"rotr", rotr},
		{"rotl", rotl},
		{NULL, NULL}
	}; /* the opcodes to compare with */

	if (!strcmp(string, "stack"))
	{
		global.datatype = 1;
		return;
	}
	if (!strcmp(string, "queue"))
	{
		global.datatype  = 0;
		return;
	}
	if (*string == '#')
	{
		return;
	}
	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, string) == 0)
		{
			op[i].f(stack, lineCount);
			return;
		}
		i++;
	}
	/* if no match there could be a opcode error */
	badOpCode(stack, string, lineCount);
}
