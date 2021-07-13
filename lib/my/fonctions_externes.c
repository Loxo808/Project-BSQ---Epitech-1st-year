/*
** EPITECH PROJECT, 2020
** ok
** File description:
** ok
*/

#include <unistd.h>
#include "my.h"

unsigned int my_put_unsigned_nbr(unsigned int nb)
{
    if (nb < 10) {
        my_putchar(nb + 48);
    } else {
        my_put_unsigned_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    return (0);
}

void convert_upper_s(int nb)
{
    int x = 0;
    int S[11] = {0, 1, 2, 3, 4, 5, 6, 7};

    for (int x = 0; nb > 0; x++) {
        S[x] = nb % 8;
        nb = nb / 8;
    }
    for (x = x - 1; x >= 0; x--)
            my_put_nbr(S[x]);
}