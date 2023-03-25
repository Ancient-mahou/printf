#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int _printf(const char *format, ...);
int helper(char c, va_list args);
int put_char(char c);
int put_str(char *str);
int put_int(int n);
int intlen(int n);
int put_bin(unsigned int n);

#endif
