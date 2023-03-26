#include "main.h"
/**
 * put_str - print string
 * @str: input
 * Return: length
*/
int put_str(char *str)
{
	int i;
	int len = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len += put_char(str[i]);
	}
	return (len);
}
