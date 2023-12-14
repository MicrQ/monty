#include "monty.h"

/**
 * isNum - checks if the the string can be casted to int(valid number)
 * @s: a string to be converted to integer
 * Return: 1 if valid. 0 if not
 *
 */

int isNum(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && s[i] == '-' && s[i + 1])
		{
			i++;
			continue;
		}
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
