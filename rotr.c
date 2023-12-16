#include "monty.h"

/**
 * rotr - ratate to bottom
 * @stk: ptr to stack
 * @lineNo: number line
 */

void rotr(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold, *btm;

	(void) stk;
	(void) lineNo;

	if (opcodeFile->stk_len <= 1)
		return;

	hold = opcodeFile->head;
	while (hold)
	{
		if (hold->next == NULL)
		{
			btm = hold;
			break;
		}
		hold = hold->next;
	}
	btm->prev->next = NULL;
	btm->next = opcodeFile->head;
	btm->prev = NULL;

	opcodeFile->head = btm;
}
