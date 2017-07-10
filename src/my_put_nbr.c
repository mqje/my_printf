/*
** my_put_nbr.c for my_put_nbr in /home/maje/delivery/CPool_Day07/library
** 
** Made by Marin Brunel
** Login   <maje@epitech.net>
** 
** Started on  Tue Oct 11 09:55:34 2016 Marin Brunel
** Last update Mon Jul 10 12:07:09 2017 stagiaire
*/

#include "my.h"

void	my_put_nbr(int	nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb == 0)
    my_putchar('0');
  else if (nb >= 10)
    {
      my_put_nbr((nb - (nb % 10)) / 10);
      my_putchar('0' + (nb % 10));
    }
  else
    my_putchar('0' + nb);
}

