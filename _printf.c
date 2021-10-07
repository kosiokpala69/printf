#include "main.h"
/**
 * _printf - is a function that formats and prints data
 * @format: format of data
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *p;
	unsigned int i;
	int j;
	int k = 0;
	va_list conspec;
	char *s;

	if (!format)
	{
		return (-1);
	}
	va_start(conspec, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p, &k);
			continue;
		}
		p++;
		switch (*p)
		{
		case 'c':
			i = va_arg(conspec, int);
			_putchar(i, &k);
			break;
		case 's':
			s = va_arg(conspec, char *);
			_puts(s, &k);
			break;
		case '%':
			_putchar('%', &k);
			break;
		case 'd':
			j = va_arg(conspec, int);
			_print_number(j, &k);
			break;
		case 'i':
			j = va_arg(conspec, int);
			_print_number(j, &k);
			break;
		case 'r':
			s = va_arg(conspec, char *);
			_rev_string(s, &k);
			break;
		case 'b':
			i = va_arg(conspec, int);
			_print_binary(i, &k);
			break;
		case 'R':
			s = va_arg(conspec, char *);
			_rot13(s, &k);
			break;
		case '\0':
			return (-1);
		default:
			_putchar('%', &k);
			_putchar(*p, &k);
		}
	}
	va_end(conspec);
	return (k);
}
