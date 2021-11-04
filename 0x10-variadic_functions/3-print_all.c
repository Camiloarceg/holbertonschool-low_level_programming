#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_char - function that prints char
 * @e: va_list.
 * Return: void
 */
void print_c(va_list e)
{
	printf("%c", va_arg(e, int));
}

/**
 * print_int - function that prints int
 * @e: va_list
 * Return: void
 */
void print_i(va_list e)
{
	printf("%d", va_arg(e, int));
}

/**
 * print_float - Function that prints float
 * @e: va_list
 * Return: void
 */
void print_f(va_list e)
{
	printf("%f", va_arg(e, double));
}

/**
 * print_string - function that prints string
 * @e: va_list
 * Return: void
 */
void print_s(va_list e)
{
	char *str;

	str = va_arg(e, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - a function that prints anything.
 * @format: list of types.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	format_t arr_format[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list ap;
	int i = 0, m = 0;
	char *separator = "";

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		m = 0;
		while (m < 4)
		{
			if (format[i] == *(arr_format[m].format))
			{
				printf("%s", separator);
				arr_format[m].func(ap, separator);
				separator = ", ";
				break;
			}
			m++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);



}
