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

	for (; buff[index]; index++)
	{
	//	_putchar(buff[index]);
chrs_printed += write(1, &buff[index], 1);
		index++;
	}

	return (chrs_printed);
}
