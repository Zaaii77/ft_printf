# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 13:23:46 by lowatell          #+#    #+#              #
#    Updated: 2024/10/19 13:32:05 by lowatell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs

LIBFT = libft.a
NAME = libftprintf.a

SRC_DIR = srcs
INC_DIR = inc
LIBFT_DIR = $(addprefix $(SRC_DIR)/, libft)
INCS = -I $(LIBFT_DIR) -I $(INC_DIR)
AR_LIBFT = $(addprefix $(LIBFT_DIR)/, $(LIBFT))

SRCS =	ft_putptr.c ft_print_address.c ft_printf.c ft_putchar.c \
		ft_putstr.c ft_putnbr.c ft_nbr_len.c

LIBFT_SRCS = *.c

OBJS = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))
LIBFT_OBJS = $(addprefix $(LIBFT_DIR)/, $(LIBFT_SRCS:.c=.o))

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

all: $(NAME)

$(NAME): $(OBJS)
	@make bonus -C $(LIBFT_DIR)
	@$(AR) $(NAME) $(OBJS) $(LIBFT_OBJS)

clean:
	@make clean -C $(LIBFT_DIR)
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(AR_LIBFT)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
