#ifndef HEADER_FILE
#define HEADER_FILE

int _printf(const char *format, ..);
typedef struct specifiers
{
	char letter;
	void (*handler)(va_list);
};
#endif
