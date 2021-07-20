/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** reverse_str
*/

#include "palindrome.h"
#include <stdlib.h>

char *reverse_str(char const *str)
{
    char *reversed_str = malloc(sizeof(char) * (my_strlen(str) + 1));
    char stock;
    int start = 0;
    int end = my_strlen(str) - 1;
    int stock_end = end;

    if (reversed_str == NULL)
        return (NULL);
    while (start <= stock_end) {
        stock = str[end];
        reversed_str[start] = stock;
        start++;
        end--;
    }
    reversed_str[start] = '\0';
    return (reversed_str);
}