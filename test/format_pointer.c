#include "main.h"

/**
 * format_pointer(char - Write a memory address
 * @buff: Arrays to store the characters
 * @j:  Buffer index
 * @len: Length of number
 * @width: Wwidth specifier
 * @flags: Flags specifier
 * @padin: Represents the character padding
 * @xtraCH: Represents extra character
 * @startPadin: Start index for padding
 *
 * Return: Number of formatted characters.
 */
int format_pointer(char buff[], int j, int len, int width,
		int flags, char padin, char xtraCH, int startPadin)
{
	int k;

	if (width > len)
	{
		for (k = 3; k < width - len + 3; k++)
			buff[k] = padin;
		buff[k] = '\0';
		if (flags & IS_MINUS && padin == ' ')/* Asign extra char to left of buffer */
		{
			buff[--k] = 'x';
			buff[--k] = '0';
			if (xtraCH)
				buff[--j] = xtraCH;
			return (write(1, &buff[j], len) + write(1, &buff[3], k - 3));
		}
		else if (!(flags & IS_MINUS) && padin == ' ')
			/* extra char to left of buffer */
		{
			buff[--j] = 'x';
			buff[--j] = '0';
			if (xtraCH)
				buff[--j] = xtraCH;
			return (write(1, &buff[3], k - 3) + write(1, &buff[j], len));
		}
		else if (!(flags & IS_MINUS) && padin == '0')/* extra char to left of padd */
		{
			if (xtraCH)
				buff[--startPadin] = xtraCH;
			buff[1] = '0';
			buff[2] = 'x';
			return (write(1, &buff[startPadin], j - startPadin) +
					write(1, &buff[j], len - (1 - startPadin) - 2));
		}
	}
	buff[--j] = 'x';
	buff[--j] = '0';
	if (xtraCH)
		buff[--j] = xtraCH;
	return (write(1, &buff[j], BUFFER_SIZE - j - 1));
}
