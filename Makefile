##
## Makefile for makefile in /home/maje/delivery/PSU_2016_my_printf_bootstrap
## 
## Made by maje
## Login   <marin.brunel@epitech.eu@epitech.net>
## 
## Started on  Wed Nov  9 10:32:02 2016 maje
## Last update Mon Jul 10 12:11:00 2017 stagiaire
##

SRC	=	src/my_putchar.c		\
		src/my_putstr.c			\
		src/my_strlen.c			\
		src/my_put_nbr.c		\
		src/my_put_nbr_unsigned.c	\
		src/my_put_nbr_base.c		\
		src/my_put_long_base.c		\
		src/flag.c			\
		src/flag1.c			\
		src/flag2.c			\
		src/my_printf.c

CFLAGS	+=	-I./include -Wall -Wextra

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ) 

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

