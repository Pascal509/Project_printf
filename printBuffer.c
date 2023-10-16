#include "main.h"
/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void printBuffer(char buff[], int *indexed_buffer)
{
	if (*indexed_buffer > 0)
{
		write(1, &buff[0], *indexed_buffer);
}

	*indexed_buffer = 0;
}
