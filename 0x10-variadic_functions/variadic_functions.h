#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separetor, const unsigned int n, ...);
void print_strings(const char *separetor, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _strlen(const char * const s);


#endif
