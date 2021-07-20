/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** str_is_palindrome
*/

#include "palindrome.h"
#include <stdlib.h>

int str_is_palindrome(char *str)
{
    int a = 0;
    int b = my_strlen(str);

    b = b - 1;
    while (a <= b) {
        if (str[a] != str[b])
            return (-1);
        a++;
        b = b - 1;
    }
    return (0);
}

int is_palindrome(int nb)
{
    char *nb_str = int_to_str(nb);

    if (str_is_palindrome(nb_str) == -1)
        return (-1);
    free(nb_str);
    return (0);
}