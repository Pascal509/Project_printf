#include "main.h"
/**
 * buffer_print - Prints the contents of the buffer if it exist
 * @buffer: Array of characters
 *
 * Return: character printed
 */

int buffer_print(char *buffer)
{
	int printed_char = 0;
	int ind = 0;

	while (buffer[ind])
	{
		printed_char += write(1, &buffer[ind], 1);
		ind++;
	}

	return (printed_char);
}
