# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henricco <henricco@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/19 17:37:09 by hdal-mol          #+#    #+#              #
#    Updated: 2021/03/20 13:23:16 by henricco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    =    libft.a
CFLAGS  =    -Wall -Wextra -Werror
CC      =    gcc 
SRC     =    *.c


OBS    =    $(SRC:.c=.o)

$(NAME):	$(OBS)	libft.h
		$(CC)$(CFLAGS)	$(SRC)	-c
		ar -rcs $(NAME) $(OBS)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf  $(OBS)
fclean: clean
	rm -rf  $(NAME)

re:    fclean all