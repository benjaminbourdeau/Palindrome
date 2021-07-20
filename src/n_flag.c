/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** n_flag
*/

#include "palindrome.h"
#include <stdlib.h>

int print_res(int nbr, int res, int iterations, int base)
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

int calcul_base(int nb, int base, int *check)
{
    int nb_base = convert_nbr_base(nb, base);
    char *str_base = int_to_str(nb_base);
    char *reversed_str = reverse_str(str_base);
    int reversed_nb = 0;
    int res = 0;
    int res_base = 0;

    if (base != 10)
        reversed_nb = any_base_to_deci(base, reversed_str);
    else
        reversed_nb = my_getnbr(reversed_str);
    res = nb + reversed_nb;
    res_base = convert_nbr_base(res, base);
    if (is_palindrome(res_base) == 0)
        *check += 1;
    free(str_base);
    free(reversed_str);
    return (res);
}

int n_flag(char *str, int base, int imin, int imax)
{
    int res = 12;
    int iterations = 0;
    int error = 0;
    int check = 0;

    res = calcul_base(my_getnbr(str), base, &check);
    iterations += 1;
    while (check == 0) {
        iterations++;
        if (iterations > imax) {
            error = my_putstr("no solution\n");
            return (error);
        }
        res = calcul_base(res, base, &check);
    }
    error = print_res(my_getnbr(str), res, iterations, base);
    return (error);
}