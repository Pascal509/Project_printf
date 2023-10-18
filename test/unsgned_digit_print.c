#include "main.h"

/**
 * unsgned_digit_print - Outputs an unsigned digit
 * @ap: Variable list of arguments
 * @buff: Array to hold digit
 * @flags:  Calculates active flags
 * @width: find width
 * @precision: Specifies precision
 * @len_modifier: Specifies len_modifier
 * Return: Number of characters printed.
 */
int unsgned_digit_print(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int index = BUFFER_SIZE - 2;
	unsigned long int digit = va_arg(ap, unsigned long int);

	digit = conv_unsgnd_len_modifier(digit, len_modifier);

	if (digit == 0)
		buff[index--] = '0';

	buff[BUFFER_SIZE - 1] = '\0';

	while (digit > 0)
	{
		buff[index--] = (digit % 10) + '0';
		digit /= 10;
	}

	index++;

	return (format_unsgnd(0, index, buff, flags,
width, precision, len_modifier));
}
