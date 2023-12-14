#include "monty.h"

/**
 * get_Opcodes - is a function that creates a connection between
 *		 the arg_op and the given file(argv[1]).
 * @filename: the file name of the bytecode that should be interpereted.
 */

void get_Opcodes(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		_free();
		exit(EXIT_FAILURE);
	}

	opcodeFile->allLine = fdopen(fd, "r");

	if (opcodeFile->allLine == NULL)
	{
		close(fd);
		dprintf(2, "Error: Can't open file %s\n", filename);
		_free();
		exit(EXIT_FAILURE);
	}
}
