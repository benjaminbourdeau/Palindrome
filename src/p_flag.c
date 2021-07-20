/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** p_flag
*/

#include "palindrome.h"
#include <stdlib.h>

int print_resp(int nbr, int res, int iterations, int base)
{
    int error = 0;

    error += my_put_nbr(nbr);
    error += my_putstr(" leads to ");
    error += my_put_nbr(res);
    error += my_putstr(" in ");
    error += my_put_nbr(iterations);
    error += my_putstr(" iteration(s) in base ");
    error += my_put_nbr(base);
    error += my_putstr("\n");
    if (error == 84)
        return (84);
    return (0);
}

int will_be_palindrome(int nb, int palindrome, int base)
{
    int i = 1;
    int res = 0;
    int check = 0;

    if (nb == palindrome)
        return (0);
    res = calcul_base(nb, base, &check);
    while (res < palindrome) {
        res = calcul_base(res, base, &check);
        i++;
    }
    if (res > palindrome)
        return (-1);
    return (i);
}

int p_flag(char *str_palindrome, int base, int imin, int imax)
{
    int palindrome = my_getnbr(str_palindrome);
    int iterations = 0;
    int error = 0;
    int solution = 0;

    for (int nb = 1; nb <= palindrome; nb++) {
        iterations = will_be_palindrome(nb, palindrome, base);
        if (iterations < imin || iterations > imax)
            iterations = -1;
        if (iterations != -1) {
            error = print_resp(nb, palindrome, iterations, base);
            solution++;
        }
    }
    if (solution == 0)
        error = my_putstr("no solution\n");
    if (error == 84)
        return (84);
    return (0);
}
