# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloua <ahaloua@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 16:37:06 by ahaloua           #+#    #+#              #
#    Updated: 2019/07/22 19:51:57 by ahaloua          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CFLAGS = -Wall -Wextra -Werror
LIBFT =  libft/
SRCS = 	fill_it/fillit.c \
		fill_it/solve.c \
		fill_it/map.c \
		fill_it/check.c \
		fill_it/main.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFT)
	@gcc $(CFLAGS) $(OBJS) -L $(LIBFT) -lft -o $(NAME)

clean:
	@$(MAKE) -C $(LIBFT) clean
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME) 
	@$(MAKE) -C $(LIBFT) fclean

re:	fclean all
