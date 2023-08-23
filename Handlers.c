#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - produces output according to format
 *@format: The format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
int i, j, len = 0;
va_list args;
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
switch (format[i + 1])
{
case 'd':
{
int num = va_arg(args, int);
char str[11];
sprintf(str, "%d", num);
for (j = 0; str[j] != '\0'; j++)
{
len += putchar(str[j]);
}
i++;
break;
}
case 'i':
{
int num = va_arg(args, int);
len += putchar(num);
i++;
break;
}
default:
break;
}
}
else
{
len += putchar(format[i]);
}
}
va_end(args);
return (len);
}
