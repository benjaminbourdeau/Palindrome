/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** lib_functions
*/

#include "palindrome.h"
#include <unistd.h>

int my_strlen(char const *str)
{
    int len = 0;

    if (str == NULL)
        return (84);
    while (str[len] != '\0') {
        len += 1;
    }
    return (len);
}

int my_putstr(char const *str)
{
    int len = my_strlen(str);

    if (str == NULL)
        return (84);
    if ((write(1, str, len)) != len)
        return (84);
    return (0);
}

int my_getnbr(char *str)
{
    int nb = 0;
    int i = 0;
    int n = 1;

    if (str == NULL)
        return (84);
    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            n = n * -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57) {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    nb = nb * n;
    return (nb);
}

int  my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb < 10) {
        my_putchar(nb + 48);
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}