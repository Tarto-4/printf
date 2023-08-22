#include "main.h"

/**
 * main - check _printf
 *
 * Return: Always0;
 */
int main(void)
{
	char str[] = "Thato";
	int num = 35;

	_printf("Hello\n");
	_printf("My name is %s\n", str);
	_printf("%d\n", num);
	_printf("%%");
	_printf("\n");
	return (0);

}
