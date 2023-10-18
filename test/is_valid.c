#include "main.h"

/**
 * is_valid - Checks if a valid character that can be printed
 * @chrs: Character to be examined.
 *
 * Return: 1 if c can be printed, 0 otherwise
 */
int is_printable(char chrs)
{
	if (chrs > 31 && chrs < 127)
	{
		return (1);
	}

	return (0);
}
