#include "monty.h"

/**
 * pint - a function that prints a value at the top of the stack
 * @stk: a pointer to the stack
 * @lineNo: number of the line the function called
 */

void pint(stack_t **stk, unsigned int lineNo)
{
	(void) stk;

	if (opcodeFile->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", lineNo);
		argsFree();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", opcodeFile->head->n);
}
