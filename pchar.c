#include "monty.h"

/**
 * pchar - prints the character at top of the stack.
 * @stk: ptr to the stack
 * @lineNo: number line
 *
 */
void pchar(stack_t **stk, unsigned int lineNo)
{
	stack_t *hold;

	(void) stk;
	if (opcodeFile->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}

	hold = opcodeFile->head;

	if (hold->n < 0 || hold->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value put of range\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hold->n);
}
