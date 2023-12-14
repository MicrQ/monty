#include "monty.h"

/**
 * freeH - frees allocated memory of head
 */

void freeH(void)
{
	if (opcodeFile->head)
		freeSTK(opcodeFile->head);

	opcodeFile->head = NULL;
}
