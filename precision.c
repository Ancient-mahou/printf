#include "main.h"
#include <stdarg.h>
#include "precision.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 * Return: Precision.
 */
int handle_precision(char **format, va_list args)
{
    int precision = -1;
    if (**format == '.')
    {
        (*format)++;
        if (isdigit(**format))
        {
            precision = atoi(*format);
            while (isdigit(**format))
                (*format)++;
        }
        else if (**format == '*')
        {
            precision = va_arg(args, int);
            (*format)++;
        }
    }
    return precision;
}
