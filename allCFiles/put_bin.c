#include "main.h"
/**
 * put_bin - print binary
 * @n: input
 * Return: length
*/
int put_bin(unsigned int n)
{
	int binary = 0, base = 1, len = 0;

	while (n > 0)
	{
		binary += (n % 2) * base;
		n /= 2;
		base *= 10;
	}
	len = put_int(binary);
	return (len);
}
