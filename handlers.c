#include <stdio.h>
#include <string.h>
#include <limits.h>
/**
 * print_char - Prints a single character
 * @c: The character to print
 *
 * Returns:  char c
*/
int print_char(char c)
{
return (putchar(c));
}
/**
* print_string - Prints a string
* @str: String to print
*
* Returns: Length of string
*/
int print_string(const char *str)
{
int len = strlen(str);
for (int i = 0; i < len; i++)
{
putchar(str[i]);
}
return (len);
}
/**
*print_int - Prints a signed integer
*@num: Integer to print
*Returns: count
*/
int print_int(int num)
{
int count = 0;
if (num < 0)
{
putchar('-');
count++;
num = -num;
}
if (num > INT_MAX)
{
printf("Number too large to print\n");
return (count);
}
count += print_unsignedint(num);
return (count);
}
/**
*print_unsigned - Prints an unsigned integer
*@num: Unsigned integer to print
*Returns:count
*/
int print_unsigned(unsigned int num)
{
if (num / 10)
count += print_unsignedint(num / 10);
putchar(num % 10 + '0');
count++;
return (count);
}
