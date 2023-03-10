#include "main.h"

/**
* get_function - determine which print function to use
* @specifier: the character that identifies the type of
* variable to print
* getspecifier is a pointer to specifiers from printf.c
* Return: type[i].getspecifier if handle is found
*/

int (*get_function(const char *specifier))(va_list)
{
	int idx;

	function_t types[] = 
	{
		{"c", handle_character},
		{"s", handle_string},
		{"%", handle_percent};
//{"d", handle_d},//
//{"i", handle_i},//
	};
	for (idx = 0, types[idx].letter; idx++)
	{
		if (*specifier == type[idx].letter[0])
			return (types[idx].specifier);
	}
	return (NULL);
}
