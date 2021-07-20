/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** main
*/

#include "palindrome.h"

int error_first_flag(char *flag, char *arg)
{
    if (my_strlen(flag) != 2)
        return (84);
    if (flag[0] != '-' && (flag[1] != 'n' || flag[1] != 'p')) {
        my_putstr("invalid argument\n");
        return (84);
    }
    if (flag[1] == 'n') {
        if (is_nbr(arg) == 84)
            return (84);
    }
    if (flag[1] == 'p') {
        if (str_is_palindrome(arg) == -1) {
            my_putstr("invalid argument\n");
            return (84);
        }
        if (is_nbr(arg) == 84)
            return (84);
    }
    return (0);
}

int error_second_flag(char **av, int *imax, int *base)
{
    if (av[3][0] != '-')
        return (84);
    if (av[3][1] != 'b' && av[3][1] != 'i')
        return (84);
    if (check_b_flag(av[3], av[4], base) == 84)
        return (84);
    return (check_i_flags(av[3], av[4], imax));
}

int error_third_flag(char **av, int *imax, int *base)
{
    if (av[5][0] != '-')
        return (84);
    if (av[5][1] != 'b' && av[5][1] != 'i')
        return (84);
    if (check_b_flag(av[5], av[6], base) == 84)
        return (84);
    return (check_i_flags(av[5], av[6], imax));
}

int main(int ac, char **av)
{
    int imin = 0;
    int imax = 100;
    int base = 10;
    if (ac != 3 && ac != 5 && ac != 7 && ac != 9) {
        my_putstr("invalid argument\n");
        return (84);
    }
    if (error_first_flag(av[1], av[2]) == 84)
        return (84);
    if (ac >= 5) {
        imin += error_second_flag(av, &imax, &base);
        if (imin == 84)
            return (84);
    }
    if (ac == 7) {
        imin += error_third_flag(av, &imax, &base);
        if (imin == 84)
            return (84);
    }
    return (palindrome(av, imin, imax, base));
}
