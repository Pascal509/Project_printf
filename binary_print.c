#include "main.h"

/**
 * binary_print - Prints an unsigned number
 * @args: List of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of char printed.
 */

int binary_print(va_list args, char __attribute__((unused))*buffer, int flags,
		int width, int precision, int size)
{
	unsigned int n, m, i;
	int count = 0;
	char *a[32];

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	n = va_arg(args, unsigned int);
	m = 2147483648; /* (2 ^ 31) */

	for (i = 0; i < 32; i++)
	{
		a[i] = n & m ? "1" : "0";
		m >>= 1;
	}
	for (i = 0, count = 0; i < 32; i++)
	{
		if (a[i][0] == '1' || i == 31)
		{
			_putchar(a[i][0]);
			count++;
		}
	}
	return (count);
}
