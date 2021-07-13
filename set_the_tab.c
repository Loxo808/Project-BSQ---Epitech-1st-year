/*
** EPITECH PROJECT, 2020
** set_the_tab
** File description:
** function used to create, set and malloc the tab
*/

#include "include/my.h"
#include "include/bsq.h"

int count_lines(char *str)
{
    int nb_lines = 1;

    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] == '\n')
            nb_lines++;
    }
    return nb_lines;
}

int count_chars(char *str)
{
    int x = first_l(str);
    int nb = 0;

    while (str[x] != '\0' && str[x] != '\n') {
        nb++;
        x++;
    }
    return nb;
}

char **fill_the_tab(char **tab, char *str)
{
    int nb_columns = 0;
    int nb_lines = 0;

    for (int x = first_l(str); str[x] != '\0'; x++) {
        if (str[x] == '\n' || str[x] == '\0') {
            tab[nb_lines][nb_columns] = str[x];
            nb_columns = 0;
            nb_lines++;
        } else {
            if (str[x] == 'o')
                tab[nb_lines][nb_columns] = '0';
            else
                tab[nb_lines][nb_columns] = '1';
            nb_columns++;
        }
        tab[nb_lines][nb_columns] = '\n';
    }
    return tab;
}

char **set_the_tab(char *str)
{
    int nb_lines = (count_lines(str) - 1);
    int nb_columns = count_chars(str);
    char **tab = malloc(sizeof(char *) * (nb_lines + 1));

    if (tab == NULL)
        return NULL;
    tab[nb_lines] = NULL;
    for (int x = 0; x != nb_lines; x++) {
        tab[x] = malloc(sizeof(char) * (nb_columns + 2));
        if (tab[x] == NULL)
            return NULL;
        tab[x][nb_columns + 1] = '\0';
    }
    tab = fill_the_tab(tab, str);
    return tab;
}

char *set_the_str(char const *filename)
{
    int fd = open(filename, O_RDONLY);
    int len = get_size(filename);
    char *str;

    if (len == 0)
        return NULL;
    if (fd == -1)
        return NULL;
    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return NULL;
    for (int i = 0; i < (len + 1); i++)
        str[i] = 0;
    read(fd, str, len);
    str[len] = '\0';
    if (close_file(fd) == 84)
        return NULL;
    return str;
}