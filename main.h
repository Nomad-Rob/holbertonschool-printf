#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

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
	void (*handle)(va_list);
};

int _printf(const char *format, ...);
int _putchar(char c);
int handle_character(va_list *args);
int handle_string(va_list *args);
int handle_percent(va_list *args);




#endif
