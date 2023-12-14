#include "monty.h"

/**
 * freeSTK - frees every node in a stack.
 * @h: a head pointer to the stack
 */

void freeSTK(stack_t *h)
{
	if (h == NULL)
		return;
	if (h->next != NULL)
		freeSTK(h->next);
	free(h);
}
