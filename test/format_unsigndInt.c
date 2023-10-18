#include "main.h"

/**
 * write_unsgnd - Writes an unsigned number
 * @is_negative: Number indicating if the num is negative
 * @ind: Index at which the number starts in the buffer
 * @buffer: Array of chars
 * @flags: Flags specifiers
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
 *
 * Return: Number of written chars.
 */
int format_unsgndInt(int not_positive, int j, char buff[],
int flags, int width, int precision, int len_modifier)
{
int i;
	
/* The number is stored at the bufer's right and starts at position i */
	int len = BUFFER_SIZE - i - 1, i = 0;
	char padin = ' ';

	(void) not_positive;
	(void)len_modifier;

	if (precision == 0 && j == BUFFER_SIZE - 2 && buff[i] == '0')
		return (0); /* printf(".0d", 0)  no char is printed */

	if (precision > 0 && precision < len)
		padin = ' ';

	while (precision > len)
	{
		buff[--j] = '0';
		len++;
	}

	if ((flags & IS_ZERO) && !(flags & IS_MINUS))
		padin = '0';

	if (width > len)
	{
		for (i = 0; i < width - len; i++)
			buff[i] = padin;

		buff[i] = '\0';

		if (flags & IS_MINUS) /* Asign extra char to left of buffer [buffer>padd]*/
		{
			return (write(1, &buff[j], len) + write(1, &buff[0], i));
		}
		else /* Asign extra char to left of padding [padd>buffer]*/
		{
			return (write(1, &buff[0], i) + write(1, &buff[j], len));
		}
	}

	return (write(1, &buff[j], len));
}
