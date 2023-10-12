#include "variadic_functions.h"

/**
 * format_char - formats character
 * @separator: string separator
 * @ap: argument pointer
 */

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - formats int
 * @separator: string separator
 * @ap: argument pointer
 */

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - formats float
 * @separator: string separator
 * @ap: argument pointer
 */

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - formats str
 * @separator: string separator
 * @ap: argument pointer
 */

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nill)";
	printf("%s%s", separator, str);
}

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0, k;
	char *separator = "";
	va_list ap;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		k = 0;
		while (tokens[k].token)
		{
			if (format[i] == tokens[k].token[0])
			{
				tokens[k].f(separator, ap);
				separator = ", ";
			}
			k++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
