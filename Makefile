# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 13:23:46 by lowatell          #+#    #+#              #
#    Updated: 2024/10/08 15:00:27 by lowatell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = ft_printf.a

SRCS = srcs/ft_print_hexa.c srcs/ft_print_address.c srcs/ft_printf.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putunbr.c srcs/ft_putnbr.c srcs/ft_nbr_len.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJ) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
