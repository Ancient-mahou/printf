#include "main.h"
/**
 * put_char - print character
 * @c: input
 * Return: length
*/
int put_char(char c)
{
	return (write(1, &c, 1));
}
