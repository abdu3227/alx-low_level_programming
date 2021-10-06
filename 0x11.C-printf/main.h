#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * struct s_print - struct
 * @q: location and method to translate data to char
 * @u: print func
 *
 * Return: int
 */
typedef struct s_print
{
	char *q;
	int (*u)(char *format, va_list);
} struct_type;

int _printf(char *format, ...);
int _putchar(char ch);
int (*driver(char *format))(char *format, va_list);
int _puts(char *s);
int printc(char *format, va_list pa);
int printstr(char *format, va_list pa);
int printint(char *format, va_list pa);
int integer(int num);
int contdigit(int num);
int _abs(int num);
int printpercent(char *format, va_list pa);
int printhex(char *format, va_list pa);
int printHEX(char *format, va_list pa);
int printocta(char *format, va_list pa);

#endif  /* MAIN_H */
