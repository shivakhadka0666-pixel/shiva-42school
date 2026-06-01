#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;
    int i;

    if (!format)
        return (-1);
    va_start(args, format);
    count = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            if (format[i] == 'c')
                count += ft_print_char(va_arg(args, int));
            else if (format[i] == 's')
                count += ft_print_str(va_arg(args, char *));
            else if (format[i] == 'd' || format[i] == 'i')
                count += ft_print_nbr(va_arg(args, int));
            else if (format[i] == 'u')
                count += ft_print_unsigned(va_arg(args, unsigned int));
            else if (format[i] == 'x')
                count += ft_print_hex(va_arg(args, unsigned int), 0);
            else if (format[i] == 'X')
                count += ft_print_hex(va_arg(args, unsigned int), 1);
            else if (format[i] == 'p')
                count += ft_print_ptr(va_arg(args, void *));
            else if (format[i] == '%')
                count += ft_print_char('%');
        }
        else
            count += ft_print_char(format[i]);
        i++;
    }
    va_end(args);
    return (count);
}