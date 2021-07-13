/*
** EPITECH PROJECT, 2020
** square
** File description:
** square
*/

#include "include/my.h"
#include "include/bsq.h"

int check_min(char **tab, int line, int col)
{
    int x = tab[line][col + 1] - 48;
    int y = tab[line + 1][col + 1] - 48;
    int z = tab[line + 1][col] - 48;
    int min = 0;

    if (x == '0' || y == '0' || z == '0')
        return 0;
    if (x <= y && x <= z) {
        min = x;
    } else if (y <= z && y <= x) {
        min = y;
    } else {
        min = z;
    }
    return min;
}

int check_square(char **tab, int line, int col) {
    char x = tab[line][col + 1];
    char y = tab[line + 1][col + 1];
    char z = tab[line + 1][col];
    int min = check_min(tab, line, col);

    if (x == '0' || y == '0' || z == '0') {
        return 0;
    } else {
        if (tab[line][col] != '0') {
            tab[line][col] = (min + 1) + 48;
        } else {
            return 0;
        }
    }
    return 1;
}

char **find_bsq(char **tab, char *str)
{
    int b_line = 0;
    int b_column = 0;
    int biggest = 1;
    int test = 0;

    for (int line = lines_in_tab(tab) - 3; line >= 0; line--) {
        for (int column = columns_in_tab(tab) - 3; column >= 0; column--) {
            if (check_square(tab, line, column) == 1)
                test = tab[line][column] - 48;
            if (test >= biggest) {
                biggest = test;
                b_line = line;
                b_column = column;
            }
        }
    }
    if (display_square(str, b_line, b_column, biggest) == 84)
        return NULL;
    return tab;
}