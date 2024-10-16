# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 13:23:46 by lowatell          #+#    #+#              #
#    Updated: 2024/10/16 17:19:55 by lowatell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs

LIBFT = libft.a
NAME = libftprintf.a

SRC_DIR = srcs
INCS = inc
LIBFT_DIR = libft
BONUS_DIR = bonus

SRCS =	ft_putptr.c ft_print_address.c ft_printf.c ft_putchar.c \
		ft_putstr.c ft_putnbr.c ft_nbr_len.c

OBJS = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))
AR_LIBFT = $(addprefix $(LIBFT_DIR)/, $(LIBFT))

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

all: $(NAME)

$(NAME): $(OBJS)
	@make bonus -C $(LIBFT_DIR)
	@$(AR) $(NAME) $(OBJS) $(AR_LIBFT)

clean:
	@make clean -C $(LIBFT_DIR)
	@$(RM) $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
