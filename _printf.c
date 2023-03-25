#include "main.h"
/**
 * _printf - entry pint
 * @format: input
 * Return: integer
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	va_list args;

	if (format == NULL || (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}
	if (!format[i])
		return (0);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			len += helper(format[i + 1], args);
			i++;
		}
		else
		{
			len += put_char(format[i]);
		}
	}
	va_end(args);
	return (len);
}
