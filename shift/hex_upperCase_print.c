#include "main.h"

/**
 * hex_upperCase_print - Prints an unsigned digit in hexadecimal
 * lowercase
 * @args: Variable list of arguments
 * @buffer: Array to hold the converted digit
 * @flags:  Finds active flags
 * @width: get width
 * @precision: Specifies precision
 * @size: Specifies len_modifier
 * Return: Number of characterss printed
 */
int hex_upperCase_print(va_list args, char __attribute__((unused))*buffer,
		int flags, int width, int precision, int size)

{
	unsigned int n = va_arg(args, unsigned int), n_rep = n;
	int num_printed = 0, padin;
	char upperHex[] = "0123456789ABCDEF";
	UNUSED (precision);

	if (size == 'l')
	{
		n = (long)n;
	}
	else if (size == 'h')
	{
		n = (short)n;
	}

	if (flags == '0')
	{
		while (n_rep > 15)
		{
			n_rep /= 16;
			num_printed++;
		}
		padin = width - num_printed;
		while (padin > 0)
		{
			num_printed += _putchar('0');
			padin--;
		}
	}
	if (flags == '-')
	{
		num_printed += hexa_print(upperHex, n);
		padin = width - num_printed;
		while (padin > 0)
		{
			num_printed += _putchar(' ');
			padin--;
		}
		return (num_printed);
	}
	if (flags == '#')
		num_printed += write(1, "0x", 2);

	num_printed += hexa_print(upperHex, n);

	return (num_printed);
}
