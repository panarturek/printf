# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arosinsk <arosinsk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 13:26:41 by arosinsk          #+#    #+#              #
#    Updated: 2024/06/10 13:28:02 by arosinsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c print_s.c print_c.c print_d_i.c print_u.c print_x.c print_p.c
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = ./libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): libft $(OBJS)
	ar rcs $(NAME) $(OBJS)

libft:
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT_NAME) .
	@mv $(LIBFT_NAME) $(NAME)

clean: cleanlibft
	rm -f $(OBJS)

cleanlibft:
	@make -C $(LIBFT_DIR) clean

fclean: clean fcleanlibft
	rm -f $(NAME)

fcleanlibft:
	@make -C $(LIBFT_DIR) fclean

re: fclean fcleanlibft all

.PHONY: all clean fclean re libft cleanlibft fcleanlibft