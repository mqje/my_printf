/*
** my.h for my.h in /home/maje/delivery/PSU_2016_my_printf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 16 02:24:39 2016 maje
** Last update Mon Jul 10 12:56:53 2017 stagiaire
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int nb);
int	my_strlen(char *str);
void	my_put_long_base(unsigned long long nb, char *base);
void	my_put_nbr_base(int nb, char *base);
void	my_put_nbr_unsigned(unsigned int nb);
void	character(int nb);
void	string(char *str);
void	string2(char *str);
void	number(int nb);
void	number1(int nb);
void	hexa1(int nb);
void	hexa2(int nb);
void	octal(int nb);
void	pointer(unsigned long long);
void	binary(int nb);
void	percent(int nb);
void	noint(unsigned int nb);
int	search(char str);
void	loop(void (**flag)(), char *str, va_list vl);
void	my_printf(char *str, ...);

#endif /* MY_H_ */
