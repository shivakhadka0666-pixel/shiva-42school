#ifndef FT_PRINT_H
#define FT_PRINT_H

#include <stdarg.h>
#include <unistd.h>

int ft_print_char(char c);
int ft_print_str(char *str);
int ft_print_nbr(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned long n, int upper);
int ft_print_ptr(void *ptr);
int ft_printf(const char *format, ...);

#endif