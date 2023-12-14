#include "monty.h"

/**
 * unknown_inst - is a function that terminates the program when
 *		unknown instraction is reached in the bytecode file.
 */

void unknown_inst(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			opcodeFile->lineNum, opcodeFile->words[0]);
	argsFree();
	exit(EXIT_FAILURE);
}
