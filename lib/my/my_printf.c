/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** ok
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int find_i(char *tab, char to_find)
{
    int x;

    for (x = 0; tab[x] != '\0'; x++) {
        if (tab[x] == to_find)
            return (x);
    }
    return (84);
}

void my_printf(char *str, ...)
{
    int stock_i = 0;
    char tab[13] = {'c', 's', 'd', 'i', 'u', 'o', \
                    'b', 'x', 'X', 'p', 'S', '%', '\0'};
    void (*tab_ftn[12]) (va_list *) = {show_char, show_str, show_nbr, \
        show_nbr, show_unsigned_nbr, show_oct, show_bin, show_hex, show_hex, \
            show_p, show_upper_s, show_percent};
    va_list list;

    va_start(list, str);
    for (int x = 0; str[x] != '\0'; x++) {
        if (x != 0 && str[x - 1] == '%') {
            stock_i = find_i(tab, str[x]);
            if (stock_i != -84)
                (*tab_ftn[stock_i]) (&list);
        } else if (str[x] != '%') {
            write(1, &str[x], 1);
        }
    }
    va_end(list);
}