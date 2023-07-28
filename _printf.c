#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success, 1. On error, -1 and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _print_number - Writes an integer to stdout.
 * @n: The integer to write.
 *
 * Return: The number of digits printed.
 */
int _print_number(int n)
{
    int count = 0;

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    if (n < 0)
    {
        _putchar('-');
        count++;
        n = -n;
    }

    int num_digits = 0;
    int temp = n;

    while (temp != 0)
    {
        temp /= 10;
        num_digits++;
    }

    int divisor = 1;
    for (int i = 1; i < num_digits; i++)
        divisor *= 10;

    while (divisor != 0)
    {
        int digit = n / divisor;
        _putchar('0' + digit);
        count++;
        n %= divisor;
        divisor /= 10;
    }

    return count;
}

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte used to
 *         end output to strings).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char ch;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;

            switch (*format)
            {
                case 'c':
                    ch = va_arg(args, int);
                    _putchar(ch);
                    count++;
                    break;
                case 's':
                    for (char *str_arg = va_arg(args, char *); *str_arg != '\0'; str_arg++)
                    {
                        _putchar(*str_arg);
                        count++;
                    }
                    break;
                case '%':
                    _putchar('%');
                    count++;
                    break;
                case 'd':
                case 'i':
                    count += _print_number(va_arg(args, int));
                    break;
                default:
                    _putchar('%');
                    _putchar(*format);
                    count += 2;
                    break;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);
    return count;
}
