#include "monty.h"

/**
 * delNode - a function thatv deletes a node form a stack
 *
*/
void delNode(void)
{
	stack_t *hold = opcodeFile->head;

	opcodeFile->head = hold->next;
	free(hold);
}

/**
 * pop - a function that removes element from the top
 *
 * @stk: a pointer to the stack
 * @lineNo: number of line the function is called
 */

void pop(stack_t **stk, unsigned int lineNo)
{
	(void) stk;

	if (opcodeFile->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}
		delNode();
		opcodeFile->stk_len -= 1;
}
