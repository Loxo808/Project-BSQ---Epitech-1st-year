/*
** EPITECH PROJECT, 2020
** flagfunctions
** File description:
** ok
*/

#include "my.h"
#include <stdarg.h>

void show_char(va_list *list)
{
    char c = va_arg(*list, int);

    my_putchar(c);
}

void show_str(va_list *list)
{
    char *str = va_arg(*list, char *);

    if (str) {
        my_putstr(str);
    }
}

void show_nbr(va_list *list)
{
    int nb = va_arg(*list, int);

    my_put_nbr(nb);
}

void show_unsigned_nbr(va_list *list)
{
    unsigned int nb = va_arg(*list, unsigned int);

    my_put_unsigned_nbr(nb);
}

void show_oct(va_list *list)
{
    int x = 0;
    unsigned int nb = va_arg(*list, unsigned int);

    int oct[11] = {'0', '1', '2', '3', '4', '5', '6', '7'};

    for (x = 0; nb > 0; x++) {
        oct[x] = nb % 8;
        nb = nb / 8;
    }
    for (x = x -1; x >= 0; x--) {
        my_put_unsigned_nbr(oct[x]);
    }
}