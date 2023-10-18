#include "main.h"

/**
 * unsgned_digit_octal - Represents an unsigned digit in octal
 * @ap:  variable listof arguments
 * @buff: Array to hold the digit
 * @flags:  Finds all the active flags
 * @width: Finds width
 * @precision: Specifies the precision
 * @len_modifier: Specifies the len_modifier
 * Return: Number of characters printed
 */
int unsgned_digit_octal(va_list ap, char buff[],
	int flags, int width, int precision, int len_modifier)
{

	int index = BUFFER_SIZE - 2;
	unsigned long int digit = va_arg(ap, unsigned long int);
	unsigned long int digit_init = digit;

	(void) width;

	digit = conv_unsgnd_len_modifier(digit, len_modifier);

	if (digit == 0)
		buff[index--] = '0';

	buff[BUFFER_SIZE - 1] = '\0';

	while (digit > 0)
	{
		buff[index--] = (digit % 8) + '0';
		digit /= 8;
	}

	if (flags & IS_HASH && digit_init != 0)
		buff[index--] = '0';

	index++;

	return (format_unsgnd(0, index, buff, flags, width, precision, len_modifier));
}
