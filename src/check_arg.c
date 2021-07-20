/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** check_arg
*/

#include "palindrome.h"
#include <stdlib.h>

int check_base_arg(char *arg)
{
    if (is_nbr(arg) == 84)
        return (84);
    if (my_getnbr(arg) <= 1 || my_getnbr(arg) > 10) {
        my_putstr("invalid argument\n");
        return (84);
    }
    return (0);
}

int check_b_flag(char *flag, char *arg, int *base)
{
    if (flag[1] == 'b' && my_strlen(flag) != 2) {
        my_putstr("invalid argument\n");
        return (84);
    }
    if (flag[1] == 'b' && my_strlen(flag) == 2) {
        if (check_base_arg(arg) == 84)
            return (84);
    }
    if (str_comp(flag, "-b") == 0)
        *base = my_getnbr(arg);
    return (0);
}

int check_i_flags(char *flag, char *arg, int *imax)
{
    if (flag[1] == 'i' && my_strlen(flag) != 5) {
        my_putstr("invalid argument\n");
        return (84);
    }
    if (flag[1] == 'i' && my_strlen(flag) == 5) {
        if (str_comp(flag, "-imin") == 84 && str_comp(flag, "-imax") == 84) {
            my_putstr("invalid argument\n");
            return (84);
        }
        if (is_nbr(arg) == 84)
            return (84);
    }
    if (str_comp(flag, "-imax") == 0)
        *imax = my_getnbr(arg);
    if (str_comp(flag, "-imin") == 0)
        return (my_getnbr(arg));
    return (0);
}

int check_palindrome_in_base(char palindrome_char, int base)
{
    char *str_base = get_str_base(base);
    int check = 0;

    for (int x = 0; str_base[x] != '\0'; x++) {
        if (palindrome_char == str_base[x])
            check += 1;
    }
    free(str_base);
    return (check);
}