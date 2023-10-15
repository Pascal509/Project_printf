#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

#define BUFF_SIZE 1024
#define LONG 2
#define SHORT 1

int _putchar(char c);
int _printf(const char *format, ...);
int string_print(va_list ap, char *buff, int flag,
int width, int precision, int length_modifier);
int find_precision(const char *format, int *index, va_list ap);
int len_modifier(const char *format, int *index);


int (*handle_fmt_spec(char fmt_specifier))(va_list ap, char *buff,
int, int, int, int);

int isDigit(int c);

/**
 * struct format - Struct op
 *
 * @format: The format specifier.
 * @function: The function therein.
 */

typedef struct format
{
	char spec;
	int (*function)(va_list, char *, int, int, int, int);
} format;




 int printBuffer(char *buff);
 int find_width(const char *format, int *index, va_list ap);

#endif
