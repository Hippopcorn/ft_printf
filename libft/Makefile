# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 11:40:40 by evarache          #+#    #+#              #
#    Updated: 2025/12/03 13:08:51 by evarache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

SRC := ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strchr.c \
ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_bzero.c ft_isalpha.c \
ft_isprint.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcat.c ft_strncmp.c \
ft_strtrim.c ft_toupper.c ft_calloc.c ft_isascii.c ft_itoa.c ft_strmapi.c \
ft_memcpy.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strnstr.c ft_substr.c \
ft_putchar_fd.c	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJDIR = build
OBJECTS = $(SRC:%.c=$(OBJDIR)/%.o)
NAME = libft.a
DEPS = $(OBJECTS:.o=.d)

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	
clean:
	rm -rf $(OBJDIR) $(DEPS)

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@ -MMD -MP

$(OBJDIR):
	mkdir -p $(OBJDIR)

-include $(DEPS)