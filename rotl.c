#include "monty.h"

/**
 * rotl - rotate the top of the stack to bottom
 * @stk: ptr to stk
 * @lineNo: line number
 */

void rotl(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold1, *hold2;

	(void) stk;
	(void) lineNo;

	if (opcodeFile->stk_len <= 1)
		return;

	hold1 = opcodeFile->head;
	hold2 = hold1->next;
	opcodeFile->head = hold2;

	while (hold2)
	{
		if (hold2->next == NULL)
		{
			hold2->next = hold1;
			hold1->next = NULL;
			hold1->prev = hold2;
			break;
		}
		hold2 = hold2->next;
	}
}
