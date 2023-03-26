#include "main.h"
/**
 * put_char - print character
 * @c: input
 * Return: length
 */
int put_char(char c)
{
	write(1, &c, 1);
	return (1);
}
