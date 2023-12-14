#include "monty.h"

/**
 * push - this function pushs a element to the stack
 * @stk: a pointer to a stack
 * @lineNo: number of line the function called
 */

void push(stack_t **stk, unsigned int lineNo)
{
	stack_t *hld;

	if (opcodeFile->NoOfWords < 2 || !(isNum(opcodeFile->words[1])))
	{
		_free();
		dprintf(2, "L%d: usage: push integer\n", lineNo);
		exit(EXIT_FAILURE);
	}

	*stk = malloc(sizeof(stack_t));
	if (*stk == NULL)
		mallocFail();
	(*stk)->next = (*stk)->prev = NULL;
	(*stk)->n = (int) atoi(opcodeFile->words[1]);

	if (opcodeFile->head == NULL)
		opcodeFile->head = *stk;
	else
	{
		if (opcodeFile->stack)
		{
			(*stk)->next = opcodeFile->head;
			opcodeFile->head->prev = *stk;
			opcodeFile->head = *stk;
		}
		else
		{
			hld = opcodeFile->head;
			while (hld->next)
				hld = hld->next;
			hld->next = *stk;
			(*stk)->prev = hld;
		}
	}
	opcodeFile->stk_len += 1;
}
