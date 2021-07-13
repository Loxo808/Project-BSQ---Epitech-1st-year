##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compil lib
##

SRC		=		my_getnbr.c					\
				my_putchar.c					\
				my_put_nbr.c					\
				my_putstr.c					\
				my_showstr.c					\
				my_strlen.c					\
				my_strstr.c					\
				my_printf.c					\
				fonctionsflag.c					\
				fonctionsflag2.c				\
				fonctions_externes.c

OBJ		=		$(SRC:.c=.o)

NAME		=		libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include/
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm	-rf	$(NAME)
	rm	-rf	../$(NAME)

re: fclean all clean
