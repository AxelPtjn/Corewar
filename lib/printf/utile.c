/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-nathan.baudelin
** File description:
** utile
*/
#include "include/my_printf.h"

int convert_precision(int *array)
{
    int pre = array[3];
    if (pre == 0)
        return 0;
    else
        pre = my_compute_power_rec(10, pre);
    return pre;
}

int my_nbrlen (int nb)
{
    int i;
    if (nb == 0)
        return 1;
    for (i = 0; nb != 0; i++) {
        nb = nb / 10;
    }
    return i;
}

int signe_int (int nb, int *taille)
{
    if (nb < 0) {
        nb = nb * (-1);
        *taille = *taille + 1;
        my_putchar('-');
    }
    return (nb);
}

double signe_float (double nb, int *taille)
{
    if (nb < 0.0) {
        nb = nb * (-1);
        *taille = *taille + 1;
        my_putchar('-');
    }
    return (nb);
}
