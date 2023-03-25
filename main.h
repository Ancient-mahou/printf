#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to function
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

/**
 * put_char - print character
 * @c: input
 * Return: length
*/
int put_char(char c)
{
	return (write(1, &c, 1));
}

int _printf(const char *format, ...);
int helper(char c, va_list args);
int put_char(char c);
int put_str(char *str);
int put_int(int n);
int intlen(int n);
int put_bin(unsigned int n);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);


#endif
