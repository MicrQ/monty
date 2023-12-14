#include "monty.h"

/**
 * _free - frees opcode holders one by one.
 */

void _free(void)
{
	if (opcodeFile == NULL)
		return;
	if (opcodeFile->inst)
	{
		free(opcodeFile->inst);
		opcodeFile->inst = NULL;
	}
	freeH();

	if (opcodeFile->aLine)
	{
		free(opcodeFile->aLine);
		opcodeFile->aLine = NULL;
	}
	free(opcodeFile);
}
