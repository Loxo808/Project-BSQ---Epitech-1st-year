/*
** EPITECH PROJECT, 2020
** task07
** File description:
** task07
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0 && nb >= -9) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb < -9) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb < 10) {
        my_putchar(nb + 48);
    } else {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    return (0);
}
