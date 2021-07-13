/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** all protos
*/

#include <stdarg.h>

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_showstr(char const *str);
unsigned int my_put_unsigned_nbr(unsigned int nb);
void show_char(va_list *list);
void show_str(va_list *list);
void show_nbr(va_list *list);
void show_oct(va_list *list);
void show_unsigned_nbr(va_list *list);
void show_hex(va_list *list);
void show_bin(va_list *list);
void show_p(va_list *list);
void show_upper_s(va_list *list);
void show_percent(va_list *list);
void convert_upper_s(int nb);
int find_i(char *tab, char to_find);
void my_printf(char *str, ...);
