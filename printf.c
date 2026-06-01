#include <stdio.h>
#include <unistd.h>

int ft_print_char(char c)
{
    write(1, &c, 1);
}

int ft_print_str(char *str)
{
    int i;

    if (!str)
        write(1, "(null)", 4);
    i = 0;
    while (!str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int ft_print_nbr(int n)
{
    int count;
    char c;

    count = 0;
    if (n == -2147483648)
        return (ft_putstr("-2147483648"));
    if (n < 0)
    {
        write(1, "-", 1);
        return (1 + ft_print_nbr(-n));
    }
    if (n > 9)
        count += ft_print_nbr(n / 10);
    c = '0' + (n % 10);
    write(1, &c, 1);
    return (count + 1);
}

int ft_print_unsigned(unsigned int n)
{
    int count;
    char c;

    count = 0;
    if (n > 9)
        count += ft_print_unsigned(n / 10);
    c = '0' + (n % 10);
    write(1, &c, 1);
    return (count + 1);
}

int ft_print_hex(unsigned long n, int upper)
{
    char *base;
    int count;
    char c;

    base = upper ? "0123456789ABCDEF" : "0123456789abcdef";
    count = 0;
    if (n >= 16)
        count += ft_print_hex(n / 16);
    c = '0' + (n % 16);
    write(1, &c, 1);
    return (count + 1);
}

int ft_print_ptr(void *ptr)
{
    if (!ptr)
        return (ft_print_str("(nil)"));
    write(1, "0x", 2);
    return (2 + ft_print_hex((unsigned long)ptr, 0));
}