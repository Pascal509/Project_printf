#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

#define BUFF_SIZE 1024
#define LONG 2
#define SHORT 1



/* FLAGS */
#define MINUS 1
#define PLUS 2
#define ZERO 4
#define HASH 8
#define BLANK_SPACE 16



/**
 * struct format - Struct op
 *
 * @format: The format specifier.
 * @function: The function therein.
 */

typedef struct format
{
        char format_specifier;
        int (*function)(va_list, char *, int, int, int, int);
} format;




int _putchar(char c);
int _printf(const char *format, ...);
void rev_print(char *s);


int find_precision(const char *format, int *current_index);
int find_len_modifier(const char *format, int *index);

int find_format_specifier(const char *format, int *current_index);
int (*handle_fmt_spec(char format_specifier))(va_list ap, char *buff,
int, int, int, int);


int percent_print(va_list ap, char __attribute__((unused))*buff,
int flag, int width, int precision, int len_modifier);
int is_Digit(int n);


int string_print(va_list ap, char *buff, int flag, int width,
                  int precision, int len_modifier);


int chrs_print(va_list ap, char __attribute__((unused))*buff, int flag,
                int width, int precision, int len_modifier);
int find_flags(const char *format, int *index);
 int printBuffer(char *buff);
 int find_width(const char *format, va_list ap, int *current_index);

#endif
