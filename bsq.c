/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** bsq
*/

#include "include/my.h"
#include "include/bsq.h"

int close_file(int fd)
{
    if (close(fd) == -1)
        return 84;
    else
        return 0;
}

char *create_new(char *new_str, char *old_str, int nb)
{
    int len = my_strlen(old_str);
    int size = len - nb;
    int i = 0;

    new_str = malloc(sizeof(char) * (size + 1));
    if (new_str == NULL)
        return NULL;
    new_str[size] = '\0';
    for (nb; old_str[nb] != '\0'; nb++) {
        new_str[i] = old_str[nb];
        i++;
    }
    return new_str;
}

int display_square(char *str, int line, int col, int size)
{
    int chars_by_line = count_chars(str) + 1;
    int ix = ((line * chars_by_line) + col) + first_l(str);
    int iy = ix;
    int nb = 0;
    char *new_str;

    for (int x = 0; x != size; x++) {
        for (int y = 0; y != size; y++) {
            str[ix] = 'x';
            ix++;
        }
        ix = (ix + chars_by_line) - size;
    }
    new_str = create_new(new_str, str, first_l(str));
    if (new_str == NULL)
        return 84;
    nb = my_strlen(new_str);
    write(1, new_str, nb);
    return 0;
}

int bsq(char const *filename)
{
    char *str;
    char **tab;

    str = set_the_str(filename);
    if (str == NULL)
        return 84;
    tab = set_the_tab(str);
    if (tab == NULL)
        return 84;
    tab = find_bsq(tab, str);
    if (tab == NULL)
        return 84;
    free_all(str, tab);
    return 0;
}

int main(int argc, char **argv)
{
    int x = 0;

    if (argv[1] == NULL)
        x = 84;
    else
        x = bsq(argv[1]);
    return x;
}