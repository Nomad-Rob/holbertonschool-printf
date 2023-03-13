#include "main.h"

/**
 * parser - Gets the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters to be used
 * @function_list: A list of all the posible functions
 * @arg_list: A list containing all the argumentents passed to the program
 * Return: A total count of the characters printed
 */
int parser(const char *format, function_t function_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{

			for (j = 0; function_list[j].letter != NULL; j++)
			{
				if (format[i + 1] == function_list[j].letter[0])
				{
					r_val = function_list[j].handle(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (function_list[j].letter == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
