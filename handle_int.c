#include "main.h"

/**
 * char_out - handles character output
 * @c: character to print
 * Return: void
 */
int prnt_c(char c)
{
	return _putchar(c);
}

/*
 * prnt_s- handles string output
 * @str: pointer to a string
 * Return: void
 */
int prnt_s(const char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}

/*
 * prnt_i- handles integers
 * @num: passed integer
 * Return: void
 */
int prnt_i(int num)
{
        int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	count += print_unsigned_integer(num);
	return count;
}

int print_unsigned_integer(unsigned int num)
{
	int count = 0;
	if (num / 10)
		count += print_unsigned_integer(num / 10);
	_putchar(num % 10+ '0');
	return count + 1;
}
