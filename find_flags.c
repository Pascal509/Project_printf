#include "main.h"
/**
 * find_flags - Searches the flag option in the format string
 * @format: The format string to check
 * @index: The current index where the '%' char is found
 *
 * Return: flags if seen, else 0;
 */

int find_flags(const char *format, int *index)
{

	int index_1;
	int current_index;
	int flags_seen = 0;
	const char FLAGS_CHAR[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARRAY[] = {MINUS, PLUS, ZERO, HASH, BLANK_SPACE, 0};

	/* loop to traverse through the characters in the format string */
	current_index = *index + 1;
	while (format[current_index] != '\0')
	{
		/* loop to match each character to its current character .*/
		index_1 = 0;
		while (FLAGS_CHAR[index_1] != '\0')
		{

			/* if there is no match, the loop ends*/
			/* the outer loop continues till the string ends */
			if (format[current_index] == FLAGS_CHAR[index_1])
			{
				flags_seen |= FLAGS_ARRAY[index_1];
				break;
	}
 
		

		if (FLAGS_CHAR[index_1] == 0)
		{
			break;
		}
		index_1++;
}
	
	current_index++;

}

*index = current_index - 1;

return (flags_seen);
}
