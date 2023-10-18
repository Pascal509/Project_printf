#include "main.h"

/**
 * handle_chrs_write - manipulates the printing of a string
 * @chrs: character type 
 * @buff: Array to store the characters
 * @flags: Find active flags.
 * @width: Find width.
 * @precision: specifies precision.
 * @len_modifier: specifies the length of string
 *
 * Return: Number of printed characters.
 */

int handle_chrs_write(char chrs, char buff[],
		int flags, int width, int precision, int len_modifier)
{ 
	/* char is stored at left and paddind at buffer's right */
	int index = 0;
	char padin = ' ';

	(void) precision;
	(void) len_modifier;

	if (flags & IS_ZERO)

		padin = '0';
	
	buff[index++] = chrs;
	buff[index] = '\0';

	if (width > 1)
	{
		buff[BUFFER_SIZE - 1] = '\0';
		for (index = 0; index < width - 1; index++)

			buff[BUFFER_SIZE - index - 2] = padin;
		if (flags & IS_MINUS)
		
			return (write(1, &buff[0], 1) +
					write(1, &buff[BUFFER_SIZE - index - 1], width - 1));
		else
		
			return (write(1, &buff[BUFFER_SIZE - index - 1], width - 1) +
					write(1, &buff[0], 1));
		
	}

	return (write(1, &buff[0], 1));
}
