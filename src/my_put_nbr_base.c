/*
** my_put_nbr_base.c for my_put_nbr_base in /home/maje/delivery/truc utile de ouf
** 
** Made by maje
** Login   <marin.brunel@epitech.eu@epitech.net>
** 
** Started on  Fri Nov 11 13:39:39 2016 maje
** Last update Mon Jul 10 12:51:27 2017 stagiaire
*/

#include "my.h"

void	my_put_nbr_base(int nb, char *base)
{
  int	sz;

  sz = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr_base(-nb, base);
    }
  if (nb / sz != 0)
    my_put_nbr_base(nb / sz, base);
  my_putchar(base[nb % sz]);
}
