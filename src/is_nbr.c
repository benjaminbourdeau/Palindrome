/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** is_nbr
*/

#include "palindrome.h"

int is_nbr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57) {
            my_putstr("invalid argument\n");
            return (84);
        }
    }
    return (0);
}
