#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024


/**
 * struct format - Struct op
 *
 * @format: The format specifier.
 * @function: The function therein.
 */

typedef struct format
{
        char fmt_spec;
        int (*function)(va_list, char *, int, int, int, int);
} format;




int _putchar(char c);
int _printf(const char *format, ...);


int percent_print(va_list ap, char __attribute__((unused))buff[],
int flag, int width, int precision, int len_modifier);

int binary_print(va_list args, char __attribute__((unused))*buffer, int flags,
                 int width, int precision, int size)

int is_Digit(int n);
int buffer_print(char *buffer)
int digit_counter(int num)









 int char_print(va_list args, char __attribute__((unused))*buffer, int flags,
                 int width, int precision, int size)

























