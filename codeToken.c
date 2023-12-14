#include "monty.h"

/**
 * opcode_token - a function that creates an array of strings from a read line
 */

void opcode_token(void)
{
	int i = 0;
	char *delim = " \n", *tkn = NULL, *lineX = NULL;

	lineX = malloc(sizeof(char) * (strlen(opcodeFile->aLine) + 1));
	strcpy(lineX, opcodeFile->aLine);
	opcodeFile->NoOfWords = 0;

	tkn = strtok(lineX, delim);
	while (tkn)
	{
		opcodeFile->NoOfWords += 1;
		tkn = strtok(NULL, delim);
	}

	opcodeFile->words = malloc(sizeof(char *) *
			(opcodeFile->NoOfWords + 1));
	strcpy(lineX, opcodeFile->aLine);
	tkn = strtok(lineX, delim);
	while (tkn)
	{
		opcodeFile->words[i] = malloc(sizeof(char) *
				(strlen(tkn) + 1));
		if (opcodeFile->words[i] == NULL)
			mallocFail();
		strcpy(opcodeFile->words[i], tkn);
		tkn = strtok(NULL, delim);
		i++;
	}
	opcodeFile->words[i] = NULL;
	free(lineX);
}

