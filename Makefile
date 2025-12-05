# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 11:40:40 by evarache          #+#    #+#              #
#    Updated: 2025/12/05 16:16:50 by evarache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_printf.c ft_printf_utils.c
OBJECTS = $(SOURCES:.c=.o)
NAME = libftprintf.a
# NAME = printf

# LIBFT_DIR = libft
# LIBFT = $(LIBFT_DIR)/libft.a

# Compile la libft via SON Makefile
# $(LIBFT):
# 	$(MAKE) -C $(LIBFT_DIR)
# all: $(NAME) $(LIBFT)

# $(NAME): $(OBJECTS)
# 	$(CC) -o $@ $^

$(NAME): $(OBJECTS)
# 	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
# 	$(MAKE) -C $(LIBFT_DIR) clean
	
fclean: clean
	rm -f $(NAME)
# 	$(MAKE) -C $(LIBFT_DIR) fclean
	
re: fclean all

.PHONY: all clean fclean re test
