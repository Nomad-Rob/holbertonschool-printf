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
* @handler: function
*
*/

typedef struct specifiers
{
	char letter;
	void (*handle)(va_list);
}

int _printf(const char *format, ...);
int _putchar(char c);
void handle_char(va_list args);
void handle_string(va_list args);
void handle_percent(va_list args);




#endif
