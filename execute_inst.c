#include "monty.h"

/**
 * execute_inst - executes the instraction read from the bytecode
 */

void execute_inst(void)
{
	stack_t *stack = NULL;

	if (opcodeFile->NoOfWords == 0)
		return;
	opcodeFile->inst->f(&stack, opcodeFile->lineNum);
}
