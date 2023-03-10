#include "main.h"

/**
* _printf - prints a formatted string to output
* @format: input string to format with specifiers to print
* Return: number of characters printed
*
*
*
*
*
*/

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*function)(va_list) = NULL;

	va_start(args, format);

	while (*format)
	{
	if (*format == '%' && *(format + 1) != '%')
	{
		format++;
		function = get_function(format);
		if ((function) == NULL)
			return (-1);

		else if (function == NULL)
		{
		_putchar(*(format - 1));
		_putchar(*format);
		count += 2;
		}
		else
		{
		count += function(args);
		}
	else if (*format == '%' && *(format + 1) == '%')
	{
	format++;
	_putchar('%');
	count++;
	}
	else
		{
		_putchar(*format);
		count++
		}
	{
	format++;
	}
va_end(args);
return (count);
}