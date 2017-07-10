/*
** flag2.c for flag2 in /home/maje/delivery/PSU_2016_my_printf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Tue Nov 15 22:47:20 2016 maje
** Last update Mon Jul 10 12:53:55 2017 stagiaire
*/

#include "my.h"

void	percent(int nb)
{
  (void)nb;
  my_putchar('%');
}

void	noint(unsigned int nb)
{
  my_put_nbr_unsigned(nb);
}
