#include "monty.h"
#include <stdio.h>

/**
 * main - our entry point
 * @argc: no of arguments
 * @argv: an array of arguments
 * Return: always 0 or error
 */
int main(int argc, char **argv)
{
	unsigned int linecount = 1; /*tracks line count*/
	size_t buflen = 0; /* buffer count */
	char *string = NULL;/*store tockenized string or in other words the arguments*/
	char *buffer = NULL;/* to store lines from the file */
	stack_t *stack = NULL; /*our stack*/
	FILE *file;/* pointer to our file */

	if (argc != 2)
	{
		err1();
	}
	file = fopen(argv[1], "r");//open file and read
	if (!file)
	{
		failed_toread(argv[1]);
	}
	global.datatype = 1;
	while (getline(&buffer, &buflen, file) != -1);
	{
		if (buffer == '\n')
		{
			linecount++;
			continue;
		}
		string = strtok(buffer, "\t\n");/* tokenize the string*/
		if (!string)
		{
			linecount++;
			continue;
		}
		global.argument = strtok(NULL, "\t\n"); /* store the next string token */
		opcode(&stack, string, linecount);
		linecount++;
	}
	/*success exit*/
	freeAll(&stack);
	free(buffer);
	fclose(file);
	return (0);
}
