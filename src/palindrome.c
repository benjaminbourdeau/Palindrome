/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome_main_function
*/

#include "palindrome.h"

int palindrome(char **av, int imin, int imax, int base)
{
    int check = 0;

    if (imin > imax)
        return (84);
    if (av[1][1] == 'n') {
        if (n_flag(av[2], base, imin, imax) == 84)
            return (84);
    }
    if (av[1][1] == 'p') {
        for (int i = 0; av[2][i] != '\0'; i++) {
            check += check_palindrome_in_base(av[2][i], base);
        }
        if (check != my_strlen(av[2])) {
            my_putstr("invalid argument\n");
            return (84);
        }
        if (p_flag(av[2], base, imin, imax) == 84)
            return (84);
    }
    return (0);
}