/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** requirements
*/

int my_factrec_synthesis(int nb)
{
    int res = 1;
    if (nb < 0 || nb >= 13)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    res = nb * my_factrec_synthesis(nb - 1);
    return (res);
}

int my_squareroot_synthesis(int nb)
{
    if (nb < 0)
        return (-1);
    if (nb == 0)
        return (0);
    for (int i = 0; i <= nb; i++) {
        if ((i * i) == nb)
            return (i);
    }
    return (-1);
}