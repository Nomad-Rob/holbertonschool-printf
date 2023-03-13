#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

/**
* struct specifiers - structure to find the correct function
* and specifiers
* @letter: specifier conversion
* @handle: function
*
*/

typedef struct specifiers
{
	char *letter;
	int (*handle)(va_list);
} function_t;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_character(va_list args);
int handle_string(va_list args);
int handle_percent(__attribute__((unused))va_list args);
int (*get_function(const char *specifier))(va_list);
int handle_decimal(va_list args);
int handle_integer(va_list args);
<<<<<<< HEAD
int countBinary(unsigned int num)

=======
int print_number(unsigned int n);
int countDigits(unsigned int num);
int _strlen(char *str);
>>>>>>> dd4b1bf1c45f4234ec4130a851cfb12540705183
#endif
