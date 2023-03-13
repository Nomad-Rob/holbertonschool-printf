#include "main.h"

/**
* handle_character - character specifier
* handle_string - string specifier
* @args: argument list containing the char to printas the next element
* Return: number of bytes printed
*/

int handle_character(va_list args)
{
	char c = va_arg(args, int);
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
int handle_string(va_list args)
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
	return (count);
}
/**
* handle_decimal - handles printing of decimal integer values
* @args: a va_list containing the arguments
* Return: The number of digits printed on success, -1 on failure.
*/
int handle_decimal(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int retval;
	unsigned int;

	if (num < 0)
	{
		retval = _putchar('-');
		if (retval == -1)
		{
			return (-1);
		}
	}
	count += 1;
	unsigned int = -num;

	else if (num == 0)
	{
		retval = _putchar('0');
		if (retval == 1)
			return (1);
		else
			return (-1);
	}
	else
	{
		unsigned int = num;
	}
	retval = print_helpers(unsigned int);
	if (retval == 1)
	{
		count += countDigits(unsigned int);
	}
	else
	{
		return (-1);
	}
}
/**
* handle_integer - Converts an integer value to its string representation and
* prints it to
* the standard output stream. If the value is negative, a minus sign is
* printed before the digits. The digits are printed in reverse order.
* @args: args a va_list containing integer to be printed
* Return: the number of characters printed, or a negative value if an error
* occurred
*/
int handle_integer(va_list args)
{
	int arg = va_arg(args, int);

	if (arg < 0)
	{
		_putchar('-');
		arg = -arg;
	}
	if (arg > 9)
	{
		handle_integer(arg / 10);
	}
	_putchar(arg % 10 + '0');
}

/**
* handle_percent - pervcent specifier
* @args: argument list
* Return: 1
*/

int handle_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
