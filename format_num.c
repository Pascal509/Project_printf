#include "main.h"

/**
 * format_num - Format a number based on width, precision, and flags
 * @buffer: Buffer
 * @ind: Index at which the number starts on the buffer
 * @flags: Flags
 * @width: Width
 * @precision: Precision specifier
 * @len: Number length
 * @padin: Padding character
 * @xtra_ch: Extra character
 *
 * Return: Number of characters to print
 */
int format_num(int index_1, char buff[], int flags, int width,
		int precision, int len, char padin, char xtra_ch)
{
int index, padin_st = 1;	
if (precision == 0 && index_1 == BUFFER_SIZE - 2
			&& buff[index_1] == '0' && width == 0)
	{
		return 0; /* printf(".0d", 0) no char is printed */
	}
	if (precision == 0 && index_1 == BUFFER_SIZE - 2 && buff[index_1] == '0')
	{
		buff[index_1] = padin = ' '; /* width is displayed with padding ' ' */
	}
	if (precision > 0 && precision < len)
	{
		padin = ' ';
	}
	while (precision > len)
	{
		buff[--index_1] = '0';
		len++;
	}
	if (xtra_ch != 0)
	{
		len++;
	}
	if (width > len)
	{
		for (index = 1; index < width - len + 1; index++)
			buff[index] = padin;
		buff[index] = '\0';
		if (flags & IS_MINUS && padin == ' ')/* Asign extra char to left of buffer */
		{
			if (xtra_ch)
				buff[--index_1] = xtra_ch;
			return (write(1, &buff[index_1], len) + write(1, &buff[1], index - 1));
		}
		else if (!(flags & IS_MINUS) && padin == ' ')/* extra char to left of buff */
		{
			if (xtra_ch)
				buff[--index] = xtra_ch;
			return (write(1, &buff[1], index - 1) + write(1, &buff[index], len));
		}
		else if (!(flags & IS_MINUS) && padin == '0')/* extra char to left of padd */
		{
			if (xtra_ch)
				buff[--padin_st] = xtra_ch;
			return (write(1, &buff[padin_st], index - padin_st) +
				write(1, &buff[index_1], len - (1 - padin_st)));
		}
	}
	if (xtra_ch)
		buff[--index_1] = xtra_ch;
	return (write(1, &buff[index_1], len));
}
