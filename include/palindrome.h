/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome_include_file
*/

#ifndef PALINDROME_INCLUDE_FILE_H_
#define PALINDROME_INCLUDE_FILE_H_

int palindrome(char **av, int imin, int imax, int base);
int my_strlen(char const *str);
int my_putstr(char const *str);
int my_getnbr(char *str);
int my_put_nbr(int nbr);
int my_putchar(char c);
char *reverse_str(char const *str);
int str_is_palindrome(char *str);
char *int_to_str(int nbr);
int n_flag(char *str, int base, int imin, int imax);
int is_nbr(char const *str);
int my_nbrlen(int nbr, int *nbr_len);
char *get_str_base(int base);
int convert_nbr_base(int nbr, int base);
int str_comp(char const *str, char *compare);
int p_flag(char *str_palindrome, int base, int imin, int imax);
int any_base_to_deci(int base, char *str_base);
int check_b_flag(char *flag, char *arg, int *base);
int check_i_flags(char *flag, char *arg, int *imax);
int calcul_base(int nb, int base, int *check);
int print_res(int nbr, int res, int iterations, int base);
int is_palindrome(int nb);
int check_palindrome_in_base(char palindrome_char, int base);

#endif /* PALINDROME_INCLUDE_FILE_H_ */

