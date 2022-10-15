#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int _strlen(const char *str);
int print(char *);
char *itoa(long int, int);

/* print a character */
int _putchar(char c);

/* printf.c */
int _printf(const char *format, ...);

/* handler.c */
int handler(const char *, va_list, int *);
int percent_handler(const char *, va_list, int *);

#endif
