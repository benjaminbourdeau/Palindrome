/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** get_str_base
*/

#include "palindrome.h"
#include <stdlib.h>

char *get_str_base(int base)
{
    int i = 0;
    char *str_base = malloc(sizeof(char) * (base + 1));

    if (str_base == NULL)
        return (NULL);
    while (i < base) {
        str_base[i] = 48 + i;
        i++;
    }
    str_base[i] = '\0';
    return (str_base);
}