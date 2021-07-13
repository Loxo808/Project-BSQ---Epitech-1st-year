/*
** EPITECH PROJECT, 2020
** task03
** File description:
** display character one by one of a string
*/

int my_strlen(char const *str)
{
    int x = 0;

    while (str[x] != '\0'){
        x++;
    }
    return (x);
}
