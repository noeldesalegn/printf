#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
char *q;
int (*u)(char *format, va_list);
}
structype;
int _putchar(char const ch);
int _puts(char const *string);
int printc(char const *format, va_list);
int printstr(char const *format, va_list);
int (*driver(char const *format))(char *format, va_list);
int _printf(char const *format, ...);
int printint(char const *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printpercent(char const *format, va_list pa);
int printhex(char const *format, va_list);
int printHEX(char const *format, va_list);
int printocta(char const *format, va_list);
int print_unsign(char *format, va_list);
#endif
