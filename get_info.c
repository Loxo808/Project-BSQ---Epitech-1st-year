/*
** EPITECH PROJECT, 2020
** get_info
** File description:
** get_info
*/

#include "include/my.h"
#include "include/bsq.h"

int get_size(char const *filename)
{
    int fd;
    int size;
    struct stat info;

    fd = stat(filename, &info);
    if (fd == -1)
        return 84;
    size = info.st_size;
    return size;
}

void free_all(char *str, char **tab)
{
    int i = 0;

    free(str);
    while (tab[i] != NULL) {
        free(tab[i]);
        i++;
    }
    free(tab);
}

int lines_in_tab(char **tab)
{
    int nb = 0;

    while (tab[nb] != NULL)
        nb++;
    return nb;
}

int columns_in_tab(char **tab)
{
    int nb = 0;

    while (tab[0][nb] != '\n')
        nb++;
    nb++;
    return nb;
}

int first_l(char *str)
{
    int nb = 0;

    for (int x = 0; str[x] != '\n'; x++)
        nb++;
    nb++;
    return nb;
}