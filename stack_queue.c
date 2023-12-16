#include "monty.h"

/**
 * stack - set format to LIFO
 * @stk: ptr to stack
 * @lineNo: line Number
 */

void stack(stack_t **stk, unsigned int lineNo)
{
	(void) stk;
	(void) lineNo;
	opcodeFile->stack = 1;
}

/**
 * queue - set the format to FIFO
 * @stk: ptr to the stack
 * @lineNo: line number
 */

void queue(stack_t **stk, unsigned int lineNo)
{
	(void) stk;
	(void) lineNo;
	opcodeFile->stack = 0;
}
