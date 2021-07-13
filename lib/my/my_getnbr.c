/*
** EPITECH PROJECT, 2020
** task
** File description:
** task
*/

#include "my.h"

int get_the_nbr(char const *str, int nbr, int x, int y)
{
    for (x = 0; str[x] != '\0'; x++) {
        if (str[x] > '/' && str[x] < ':') {
            nbr = nbr + (str[x] - 48);
            nbr = nbr * 10;
        }
        if (str[x] == '-')
            y++;
        if (str[x] > '@' && str[x] < '[' || str[x] > '`' && str[x] < '{') {
            nbr = nbr / 10;
            y = y % 2;
            if (y != 0) {
                nbr = nbr * (-1);
            }
            return (nbr);
        }
    }
}

int my_getnbr(char const *str)
{
    int x = 0;
    int nbr = 0;
    int y = 0;

    nbr = get_the_nbr(str, nbr, x, y);
    nbr = nbr / 10;
    if (nbr < -214748567 || nbr > 214748568) {
        nbr = 0;
    }
    y = y % 2;
    if (y != 0) {
        nbr = nbr * (-1);
    }
    return (nbr);
}
