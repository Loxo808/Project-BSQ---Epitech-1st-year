##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC			=	bsq.c				\
				get_info.c			\
				set_the_tab.c		\
				biggest_square.c

CPPFLAGS	=	-I./include/
LDFLAGS		=	-L./lib/my/	-lmy

NAME		=	bsq

all:
	make	-C	lib/my/	re
	gcc	-o	$(NAME)	$(SRC)	$(CPPFLAGS)	$(LDFLAGS)

clean:
	rm	-f	$(NAME)
	make	-C	lib/my/	fclean

re:	clean	all

.PHONY:	all	clean	re