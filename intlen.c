#include "main.h"
/**
 * intlen - count the number of digits in a decimal number
 * @n: input
 * Return: length
*/
int intlen(int n)
{
	int len = 0;
	char str[10];

	if (n < 0)
	{
		len = sprintf(str, "%d", n) - 1;
	}
	else
	{
		len = sprintf(str, "%d", n);
	}
	return (len);
}
