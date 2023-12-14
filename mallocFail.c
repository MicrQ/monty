#include "monty.h"

/**
 * mallocFail - a function that prints failure message of malloc
 *		and frees memory and exit with EXIT_FAILURE
 */

void mallocFail(void)
{
	dprintf(2, "Error: malloc failed\n");
		_free();
		exit(EXIT_FAILURE);
}
