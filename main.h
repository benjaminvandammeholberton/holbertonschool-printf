#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct structprint - structure that contains specifiers
 * and associated functions
 * @letter: specifier used to call the right function
 * @f: print function for specific type
 */

typedef struct structprint
{
	char *letter;
	int (*f)(va_list arg);
} structprint;

int _print(const char *format, ...);
int pritnInt(va_list ap);
int pritnInt2(int n);
int printChar(va_list ap);
int printString(va_list ap);
int _putchar(char c);
int printPercent(va_list ap);

#endif
