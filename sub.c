#include "monty.h"

/**
 * sub - subtracts top elements from the second top element
 *
 * @stk: a pointer to the stack
 * @lineNo: number line the function called
 */

void sub(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold1, *hold2;

	(void) stk;
	if (opcodeFile->stk_len <= 1)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}

	hold1 = opcodeFile->head;
	hold2 = hold1->next;

	hold2->n = hold2->n - hold1->n;
	delNode();
	opcodeFile->stk_len -= 1;
}
