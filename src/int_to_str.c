/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** int_to_str
*/

#include <stdlib.h>

int my_nbrlen(int nbr, int *nbr_len)
{
    if (nbr < 10)
        *nbr_len += 1;
    else {
        my_nbrlen(nbr / 10, nbr_len);
        my_nbrlen(nbr % 10, nbr_len);
    }
    return (*nbr_len);
}

int get_str(int nbr, char *str, int *count)
{
    if (nbr < 10) {
        str[*count] = nbr + 48;
        *count += 1;
    } else {
        get_str(nbr / 10, str, count);
        get_str(nbr % 10, str, count);
    }
    return (0);
}

char *int_to_str(int nbr)
{
    int count = 0;
    int nbr_len = 0;
    char *str = malloc(sizeof(char) * ((my_nbrlen(nbr, &nbr_len)) + 1));

    if (str == NULL)
        return (NULL);
    get_str(nbr, str, &count);
    str[nbr_len] = '\0';
    return (str);
}