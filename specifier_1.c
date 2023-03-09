#include "main.h"
#include <stdarg.h>

/**
* handle_character - character specifier
* handle_string - string specifier
* @args: argument list containing the char to printas the next element
* Return: number of bytes printed
*/

void handle_character(va_list args)
{
	char c = va_args(args, int);
	int count = 0, retval;

	retval = _putchar(c);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}

/**
* handle_string - string specifier
* @args: argument list
* Return: number of bytes printed
*/
void handle_string(va_list args)
{
	char *s = va_arg(args, char*);
	int count = 0;
	int retval;

	if (!s)
		s = "(null)";

	while (*s)
	{
		retval = _putchar(*s);
		if (retval == -1)
			return (-1);
		count++;
		s++;
	}
}
