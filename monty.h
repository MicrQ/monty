#ifndef MONTY_HEADER
#define MONTY_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_opcode - a struct that holds the given file open
 *              and read from it.
 * @allLine: the stream that holds the file
 * @aLine: a single line from the file.
 * @lineNum: number of line the instruction bing executed
 * @words: array of words extracted from the instruction
 * @NoOfWords: length of the words array
 * @inst: instruction to be executed by its function
 * 
 * Description: extracts a line of code || argument form
 *              monty bytecode.
*/
typedef struct arg_opcode
{
    FILE *allLine;
    char *aLine;
    unsigned int lineNum;
    char **words;
    int NoOfWords;
    instruction_t *inst;
    stack_t *head;
    int stk_len;
    int stack;
} arg_op;
extern arg_op *opcodeFile;

/*****       *******        ******  *****/
/* MY FUNCTIONS PROTOTYPE GOES HERE */
void init_opcode(void);
void get_Opcodes(char *filename);
void _free(void);
void mallocFail(void);
void free_words(void);
void opcode_token(void);
void get_inst(void);
void unknown_inst(void);
void close_files(void);
int isNum(char *s);
void freeSTK(stack_t *h);
void freeH(void);
void execute_inst(void);
void argsFree(void);

void push(stack_t **stk, unsigned int lineNo);
void pall(stack_t **stk, unsigned int lineNo);
void pint(stack_t **stk, unsigned int lineNo);
void pop(stack_t **stk, unsigned int lineNo);
void delNode(void);
void swap(stack_t **stk, unsigned int lineNo);
void add(stack_t **stk, unsigned int lineNo);
void nop(stack_t **stk, unsigned int lineNo);



#endif
