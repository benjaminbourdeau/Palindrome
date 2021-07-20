/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** any_base_to_deci
*/

#include "palindrome.h"
#include <stdlib.h>

int any_base_to_deci(int base, char *str_base)
{
    int nbr = 0;
    int convert_pow = 1;
    char *stock = NULL;
    int len = my_strlen(str_base);

    stock = malloc(sizeof(char) * 2);
    for (int i = (len - 1); i >= 0; i--) {
        stock[0] = str_base[i];
        stock[1] = '\0';
        nbr += (my_getnbr(stock)) * convert_pow;
        convert_pow *= base;
    }
    free(stock);
    return (nbr);
}