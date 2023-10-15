#include "main.h"

/**
 * printBuffer - Prints the content of the buffer
 * @buff: Buffer to print
 * Return: Nothing
 */
int printBuffer(char *buff)
{
	int chrs_printed = 0;
	int index = 0;

	for (; buff[index] != '\0'; index++)
	{
		_putchar(buff[index]);
		chrs_printed++;
	}

	return (chrs_printed);
}
