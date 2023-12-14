#include "monty.h"

/**
 * add - a function that adds the top two elements
 * @stk: a pointer to the stack
 * @lineNo: line number of the function call
 */

void add(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold1, *hold2;

	(void) stk;
	if (opcodeFile->stk_len <= 1)
	{
		dprintf(2, "L%d: can't add, stack too short\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}
	hold1 = opcodeFile->head;
	hold2 = hold1->next;
	hold2->n = hold1->n + hold2->n;
	delNode();
	opcodeFile->stk_len -= 1;
}
