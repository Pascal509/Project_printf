#include "main.h"

/**
 * reverse_print - Prints reverse string.
 * @args:  Variable list of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of chars printed
 */

int reverse_print(va_list args, char *buffer, int flags, int width,
		int precision, int size)

{
	char printed_char;
	int count;

	UNUSED(precision);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);

	buffer = va_arg(args, char *);


	count = 0;
	printed_char = 0;
	for (; buffer[count] != '\0'; count++)
	{
		printed_char++;
	}

	count--;
	for (; count >= 0; count--)
	{
		_putchar(buffer[count]);
	}



	return (printed_char);
}

