# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fgroenew <fgroenew@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/11/07 16:02:19 by fgroenew      #+#    #+#                  #
#    Updated: 2024/11/08 11:46:45 by fgroenew      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap_input_generator

SRC_DIR			=	src/

CFILES			=	main.c
SRC_FILES		=	$(addprefix $(SRC_DIR), $(CFILES))

CC				=	cc
TOTAL_NUMBERS	?=	500
CFLAGS			=	-Wall -Werror -Wextra -D TOTAL_NUMBERS=$(TOTAL_NUMBERS) -D MAX_RANDOM=$(TOTAL_NUMBERS)

all: $(NAME)

$(NAME): fclean
	$(CC) $(CFLAGS) -o $(NAME) $(SRC_FILES)
	./$(NAME)

fclean:
	rm -f $(NAME)

.PHONY: all fclean
