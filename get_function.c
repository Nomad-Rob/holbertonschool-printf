#include "main.h"

/**
* get_function - determine which print function to use
* @specifier: the character that identifies the type of
* variable to print
* getspecifier is a pointer to specifiers from printf.c
* Return: type[i].getspecifier if handle is found
*/

int (*get_function(char *specifier))(va_list)
{

	function_t types[] = {
		{"c", handle_character},
		{"s", handle_string},
		["%", handle_percent};
//{"d", handle_d},//
//{"i", handle_i},//
	};
	int i = 0

	if (!s)
	{
		exit;
	}
	while (type[i].handle != NULL)
	{
		if(_strcmp(s, type[i].handle == 0)
		{
			return (type[i].getspecifier);
		}
		i++;
	}
return (NULL);
}
