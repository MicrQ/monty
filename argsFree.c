#include "monty.h"

/**
 * argsFree - frees all remaining args
 */

void argsFree(void)
{
	close_files();
	free_words();
	_free();
}
