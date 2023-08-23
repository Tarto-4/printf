#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
* _printf - iterates and prints
* @format: desired format string
* Return: returns char_print
*/

int _printf(const char *format, ...)
{
int char_print = 0;
va_list list_args;
va_start(list_args, format);

while (*format)
{
if (*format != '%')
{
write(1, format, 1);
char_print++;
}
else
{
format++;
if (*format == 'c')
{
char c = va_arg(list_args, int);
write(1, &c, 1);
char_print++;
}
else if (*format == 's')
{
char *str = va_arg(list_args, char*);
int len = 0;
while (*str[len] != '\0')
{
	len++
}
write(1, str, len);
char_print += len;
}
}
}
format++;
}

va_end(list_args);
return (char_print);
}
