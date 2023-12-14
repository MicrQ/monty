#include "monty.h"

/**
 * close_files - a function that closes all opened files.
 */

void close_files(void)
{
	if (opcodeFile->allLine == NULL)
		return;

	fclose(opcodeFile->allLine);
	opcodeFile->allLine = NULL;
}
