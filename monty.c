#include "monty.h"

/**
 * main - the man entry of the entire program
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on Success
 */

arg_op *opcodeFile = NULL;

int main(int argc, char **argv)
{
	size_t codeLen = 0;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	init_opcode();
	get_Opcodes(argv[1]);
	while (getline(&opcodeFile->aLine, &codeLen, opcodeFile->allLine) != -1)
	{
		opcodeFile->lineNum += 1;
		opcode_token();
		get_inst();
		execute_inst();
		free_words();
	}
	close_files();
	_free();
	return (0);
}
