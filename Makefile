# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tordner <tordner@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 15:28:00 by tordner           #+#    #+#              #
#    Updated: 2024/12/16 20:00:30 by tordner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	edit_stack.c	\
		free.c			\
		ft_atol.c		\
		ft_split.c		\
		ft_strdup.c		\
		init_stack.c	\
		main.c			\
		mimic_av.c		\
		push.c			\
		rev_rotate.c	\
		rotate.c		\
		sort_five_n.c	\
		sort_list.c		\
		sort_three_n.c	\
		swap.c			\
		errors_handling.c


OBJ		=	$(SRC:.c=.o)

NAME	=	push_swap

HEADERS	=	-I includes

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ)
			cc $(HEADERS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
