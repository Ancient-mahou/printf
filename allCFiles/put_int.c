#include "main.h"
/**
 * put_int - print integer
 * @n: input
 * Return: length
*/
int put_int(int n)
{
	int sign = 0;

	if (n >= 0 && n <= 9)
	{
		put_char(n + '0');
	}
	else if (n < 0)
	{
		put_char('-');
		put_int(-1 * n);
		sign++;
	}
	else
	{
		put_int(n / 10);
		put_int(n % 10);
	}
	return (intlen(n) + sign);
}
