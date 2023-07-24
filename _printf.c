#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    char *str_arg;
    char char_arg;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            _putchar(*format);
            printed_chars++;
        }
        else
        {
            format++;

            switch (*format)
            {
            case 'c':
                char_arg = va_arg(args, int);
                _putchar(char_arg);
                printed_chars++;
                break;

            case 's':
                str_arg = va_arg(args, char *);
                if (str_arg == NULL)
                    str_arg = "(null)";

                while (*str_arg)
                {
                    _putchar(*str_arg);
                    printed_chars++;
                    str_arg++;
                }
                break;

            case '%':
                _putchar('%');
                printed_chars++;
                break;

            default:
                _putchar('%');
                _putchar(*format);
                printed_chars += 2;
                break;
            }
        }
        format++;
    }

    va_end(args);

    return printed_chars;
}
