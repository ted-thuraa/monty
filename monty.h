#ifndef MAIN_H
#define MAIN_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdarg.h>
#include <stddef.h>
#include <math.h>
#include <sys/stat.h>
#include <sys/types.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: an integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void(*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct world - our global struct
 * @argument: argument of string
 * @datatype: wil be used to decide whether stack or queues
 * Description: global structure used to pass data around the functions easily
 */
typedef struct world
{
	char *argument;
	int datatype;
} bully;

extern bully global;
bully global;

/* file operations*/
void freeALL(stack_t **h);
int isDigglet(char *string);
void lineUp(stack_t **stack, stack_t *temp);
int interpret_line(char *, int, int);
void find_func(char *, char *, int, int);

/*stack operation*/
void opcode(stack_t **stack, char *string, unsigned int lineCount);
void print_top(stack_t **, unsigned int);
void pop_top(stack_t **, unsigned int);
void nop(stack_t **, unsigned int);
void swap_nodes(stack_t **, unsigned int);
void pall(stack_t **stack, unsigned int lineCount);
void pint(stack_t **stack, unsigned int lineCount);
void stackIt(stack_t **stack, stack_t *temp);
void push(stack_t **stack, unsigned int lineCount);
void pchar(stack_t **stack, unsigned int lineCount);
/*String operations*/
void print_char(stack_t **, unsigned int);
void print_str(stack_t **, unsigned int);
void rotr(stack_t **stack, unsigned int lineCount);
void rotl(stack_t **, unsigned int);
/*Math operations with nodes*/
void add_nodes(stack_t **, unsigned int);
void sub_nodes(stack_t **, unsigned int);
void div_nodes(stack_t **, unsigned int);
void mul_nodes(stack_t **, unsigned int);
void mod_nodes(stack_t **, unsigned int);
/*String operations*/
void print_char(stack_t **, unsigned int);
void print_str(stack_t **, unsigned int);
void rotl(stack_t **, unsigned int);
/*Error hanlding*/
void usageError(void);
void fileReadError(char *argv);
void badOpCode(stack_t **stack, char *string, unsigned int lineCount);
void mallocError(stack_t **stack);
void integerError(stack_t **stack, int lineCount);


#endif /*MAIN_H*/
