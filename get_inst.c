#include "monty.h"

/**
 * get_inst - a function that get a function for a given argument
 */

void get_inst(void)
{
	int i = 0;
	instruction_t inst_s[] = {
		{"pall", &pall}, {"pint", &pint}, {"pop", &pop}, {"swap", &swap},
		{"push", &push}, {"add", &add}, {"nop", &nop}, {"sub", &sub},
		{"div", &divv}, {"mul", &mul}, {"mod", &mod},
		{NULL, NULL}
	};


	if (opcodeFile->NoOfWords == 0)
		return;
	
	if (opcodeFile->words[0][0] == '#')
	{
		opcodeFile->inst->opcode = "nop";
		opcodeFile->inst->f = nop;
		return;
	}

	for (; inst_s[i].opcode != NULL; i++)
	{
		if (strcmp(inst_s[i].opcode, opcodeFile->words[0]) == 0)
		{
			opcodeFile->inst->opcode = inst_s[i].opcode;
			opcodeFile->inst->f = inst_s[i].f;
			return;
		}
	}
	unknown_inst();
}
