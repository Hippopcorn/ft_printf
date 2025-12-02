# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 11:40:40 by evarache          #+#    #+#              #
#    Updated: 2025/11/19 15:09:10 by evarache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

SRC := ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strchr.c \
ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_bzero.c ft_isalpha.c \
ft_isprint.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcat.c ft_strncmp.c \
ft_strtrim.c ft_toupper.c ft_calloc.c ft_isascii.c ft_itoa.c ft_strmapi.c \
ft_memcpy.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strnstr.c ft_substr.c \
ft_putchar_fd.c	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS = $(SRC:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c	\
ft_lstclear_bonus.c	ft_lstiter_bonus.c	ft_lstmap_bonus.c

BONUS_OBJECTS = $(BONUS:.c=.o)

NAME = libft.a

ALL_OBJECTS = $(OBJECTS) $(BONUS_OBJECTS)

DEPS = $(ALL_OBJECTS:.o=.d)

MANDATORY_DONE = .mandatory_done

BONUS_DONE = .bonus_done

all: $(NAME)

$(NAME): $(MANDATORY_DONE)


$(MANDATORY_DONE) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	rm -f $(BONUS_DONE)
	touch $(MANDATORY_DONE)
	
	
bonus: $(BONUS_DONE)

$(BONUS_DONE) : $(ALL_OBJECTS)
	ar rcs $(NAME) $(ALL_OBJECTS)
	rm -f $(MANDATORY_DONE)
	touch $(BONUS_DONE)

clean:
	rm -f $(ALL_OBJECTS) $(DEPS) $(MANDATORY_DONE) $(BONUS_DONE)

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus

# Compile rule
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -MMD -MP

-include $(DEPS)