#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print - structure that contains specifiers
 * and associated functions
 * @letter: specifier used to call the right function
 * @f: print function for specific type
 */
typedef struct print
{
	char *letter;
	int (*f)(va_list arg);
} print;

int _printf(const char *format, ...);
int printInt(va_list ap);
int printInt2(long n);
int printChar(va_list ap);
int printString(va_list ap);
int _putchar(char c);
int printPercent(va_list ap);
int printBinary(va_list ap);

#endif
