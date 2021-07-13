/*
** EPITECH PROJECT, 2020
** bsq.h
** File description:
** bsq.h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int bsq(char const *filename);
int count_lines(char *str);
char **fill_the_tab(char **tab, char *str);
char **set_the_tab(char *str);
char *set_the_str(char const *filename);
int get_size(char const *filename);
void free_all(char *str, char **tab);
int close_file(int fd);
int lines_in_tab(char **tab);
int columns_in_tab(char **tab);
char **find_bsq(char **tab, char *str);
int count_chars(char *str);
int first_l(char *str);
int display_square(char *str, int line, int col, int size);
char *create_new(char *new_str, char *old_str, int nb);