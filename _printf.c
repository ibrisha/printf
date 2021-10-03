#include "main.h"
/**
 * _printf - replication of some of the features from C function printf()
 * @format: character string of directives, flags, modifiers, & specifiers
 * Description: This function uses the variable arguments functionality and is
 * supposed to resemble printf(). 
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i, result;
​
	result = 0;
	va_start(ap, format);
​
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			result += pull_print(format[i + 1], &ap);
			i++;
		}
		else
		{
			_putchar(format[i]);
			result++;
		}
	}
	va_end(ap);
	return (result);
}
