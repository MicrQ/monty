#include "monty.h"

/**
 * mod - modulo
 * @stk: ptr
 * @lineNo: number line
 */
void mod(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold1, *hold2;

	(void) stk;
	if (opcodeFile->stk_len <= 1)
	{
		dprintf(2, "L%d: can't mod, stack too short\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}

	hold1 = opcodeFile->head;
	hold2 = hold1->next;

	if (hold1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}

	hold2->n = hold2->n % hold1->n;
	delNode();

	opcodeFile->stk_len -= 1;
}
