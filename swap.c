#include "monty.h"

/**
 * swap - a function that swaps the top two elements
 * @stk: a pointer to the stack
 *
 * @lineNo: number of line the function called
 *
 */

void swap(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold1, *hold2;

	(void) stk;

	if (opcodeFile->stk_len <= 1)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}
	hold1 = opcodeFile->head;
	hold2 = hold1->next;
	hold1->next = hold2->next;
	if (hold1->next)
		hold1->next->prev = hold2;
	hold2->next = hold1;
	hold1->prev = hold2;
	hold2->prev = NULL;
	opcodeFile->head = hold2;
}
