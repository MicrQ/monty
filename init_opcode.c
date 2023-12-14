#include "monty.h"

/**
 * init_opcode - makes the file streamer and of the global
 *		 variable ready to read and hold instructions from given file.
 */

void init_opcode(void)
{
	opcodeFile = malloc(sizeof(arg_op));
	if (opcodeFile == NULL)
		mallocFail();

	opcodeFile->inst = malloc(sizeof(instruction_t));
	if (opcodeFile->inst == NULL)
		mallocFail();

	opcodeFile->allLine = NULL;
	opcodeFile->aLine = NULL;
	opcodeFile->head = NULL;
	opcodeFile->NoOfWords = 0;
	opcodeFile->lineNum = 0;
	opcodeFile->stk_len = 0;
	opcodeFile->stack = 1;
}
