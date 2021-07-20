/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** str_compare
*/

#include "palindrome.h"

int str_comp(char const *str, char *compare)
{
    if (my_strlen(str) != my_strlen(compare))
        return (84);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != compare[i])
            return (84);
    }
    return (0);
}
