#include <stdio.h>
#include <stdarg.h>

/**
* handle_char - character specifier
* handle_string - string specifier
* handle_percent - percent specifier 
* @args: argument list containing the char/string to printas the next element
* Return: number of bytes printed
*/

void handle_char(va_list args)
{
	char c = va_args(args, int);
	_putchar(c);

	retval = _putchar(c);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}

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
