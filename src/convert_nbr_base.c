/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** convert_nbr_base
*/

#include "palindrome.h"
#include <stdlib.h>

int get_nbr_base_len(int nbr, char *base, int *nbr_base_len)
{
    int max = my_strlen(base);

    if (nbr < 0) {
        *nbr_base_len += 1;
        nbr *= (-1);
    }
    if (nbr >= (max - 1))
        get_nbr_base_len(nbr / max, base, nbr_base_len);
    *nbr_base_len += 1;
    return (*nbr_base_len);
}

char *get_str_of_nbr_base(int nbr, char *base, char *str_of_nbr_base, int *i)
{
    int max = my_strlen(base);

    if (nbr < 0) {
        str_of_nbr_base[*i] = '-';
        *i += 1;
        nbr *= (-1);
    }
    if (nbr >= (max - 1))
        get_str_of_nbr_base(nbr / max, base, str_of_nbr_base, i);
    str_of_nbr_base[*i] = base[nbr % max];
    *i += 1;
    return (str_of_nbr_base);
}

int convert_nbr_base(int nbr, int base)
{
    char *str_base = get_str_base(base);
    int nbr_base = 0;
    int nbr_base_len = 0;
    char *str_of_nbr_base = NULL;
    int i = 0;

    nbr_base_len = get_nbr_base_len(nbr, str_base, &nbr_base_len);
    str_of_nbr_base = malloc(sizeof(char) * (nbr_base_len + 1));
    str_of_nbr_base[nbr_base_len] = '\0';
    if (str_of_nbr_base == NULL)
        return (84);
    str_of_nbr_base = get_str_of_nbr_base(nbr, str_base, str_of_nbr_base, &i);
    free(str_base);
    nbr_base = my_getnbr(str_of_nbr_base);
    free(str_of_nbr_base);
    return (nbr_base);
}