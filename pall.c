#include "monty.h"

/**
 * pall - a function that prints all elements in a stack
 *
 * @stk: a pointer to a stack to be printed
 * @lineNo: number line of a the function call.
 */

void pall(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold;

	if (opcodeFile->head == NULL)
		return;
	(void) lineNo;
	(void) stk;

	hold = opcodeFile->head;
	while (hold != NULL)
	{
		printf("%d\n", hold->n);
		hold = hold->next;
	}
}
