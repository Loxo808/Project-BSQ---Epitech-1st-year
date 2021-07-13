/*
** EPITECH PROJECT, 2020
** flagfunctions2
** File description:
** ok
*/

#include "my.h"
#include <stdarg.h>

void show_bin(va_list *list)
{
    int x = 0;
    unsigned int nb = va_arg(*list, unsigned int);

    int bin[32] = {'0', '1'};

    for (x = 0; nb > 0; x++) {
        bin[x] = nb % 2;
        nb = nb / 2;
    }
    for (x = x -1; x >= 0; x--) {
        my_put_unsigned_nbr(bin[x]);
    }
}

void show_hex(va_list *list)
{
    int x = 0;
    unsigned int nb = va_arg(*list, unsigned int);

    int hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', \
        'A', 'B', 'C', 'E', 'F'};

    for (x = 0; nb > 0; x++) {
        hex[x] = nb % 16;
        nb = nb / 16;
    }
    for (x = x -1; x >= 0; x--) {
        if (hex[x] < 10)
            my_putchar(hex[x] + 48);
        else
            my_putchar(hex[x] + 55);
    }
}

void show_p(va_list *list)
{
    int x = 0;
    unsigned int nb = va_arg(*list, unsigned int);
    int p[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', \
        'a', 'b', 'c', 'e', 'f'};

    for (x = 0; nb > 0; x++) {
        p[x] = nb % 16;
        nb = nb / 16;
    }
    for (x = x -1; x >= 0; x--) {
        if (p[x] < 10) {
            my_putstr("0x");
            my_putchar(p[x] + 48);
        } else {
            my_putstr("0x");
            my_putchar(p[x] + 55);
        }
    }
}

void show_upper_s(va_list *list)
{
    char *str = va_arg(*list, char *);
    int x = 0;

    for (x = 0; str[x] != '\0'; x++) {
        if (str[x] < 32 || str[x] >= 127) {
            my_putchar('\\');
            convert_upper_s(str[x]);
        } else {
            my_putchar(str[x]);
        }
    }
}

void show_percent(va_list *list)
{
    my_putchar('%');
}