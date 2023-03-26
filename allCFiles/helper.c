#include "main.h"
/**
 * helper - help the printf function
 * @c: input
 * @args: input
 * Return: length
*/
int helper(char c, va_list args)
{
	int len;

	if (c == 'c')
	{
		len = put_char(va_arg(args, int));
	}
	else if (c == '%')
	{
		len = put_char('%');
	}
	else if (c == 's')
	{
		len = put_str(va_arg(args, char *));
	}
	else if (c == 'i' || c == 'd')
	{
		len = put_int(va_arg(args, int));
	}
	else if (c == 'b')
	{
		len = put_bin(va_arg(args, unsigned int));
	}
	return (len);
}
