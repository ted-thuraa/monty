#include "monty.h"

/**
 * isDigglet - function that checks if digit.
 * @string: the string we want to check if it is a digit
 *
 * Return: if it returns a 0, it is NOT a digit, else return 1 cause it a digit
 */
int isDiggilet(char *string)
{
	if (!string || *string == '\0')
	{
		return (0);
	}
	if(*string == '-')
	{
		string++;/* if we encounter a negative*/
	}
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}
