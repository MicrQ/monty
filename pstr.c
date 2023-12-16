#include "monty.h"

/**
 * pstr - prints a string starting at the top
 * @stk: ptr to the stack
 * @lineNo: number line
 */

void pstr(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold;

	(void) stk;
	(void) lineNo;

	hold = opcodeFile->head;

	while (hold)
	{
		if (hold->n <=0 || hold->n > 127)
			break;
		printf("%c", hold->n);
		hold = hold->next;
	}
	printf("\n");
}
