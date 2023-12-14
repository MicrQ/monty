#include "monty.h"

/**
 * free_words - a function that frees alloced memory for instructions.
 */

void free_words(void)
{
	int i = 0;

	if (opcodeFile->words == NULL)
		return;

	while (opcodeFile->words[i])
	{
		free(opcodeFile->words[i]);
		i++;
	}
	free(opcodeFile->words);
	opcodeFile->words = NULL;
}
