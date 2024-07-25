# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 10:48:11 by lrossi-u          #+#    #+#              #
#    Updated: 2024/07/04 16:19:34 by lrossi-u         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_memchr.c ft_memset.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_bzero.c ft_atoi.c ft_strdup.c ft_calloc.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c
OBJECTS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_toupper.o ft_tolower.o ft_memchr.o ft_memset.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strnstr.o ft_strlcpy.o ft_strlcat.o ft_memcpy.o ft_memcmp.o ft_memmove.o ft_bzero.o ft_atoi.o ft_strdup.o ft_calloc.o ft_strjoin.o ft_substr.o ft_strtrim.o ft_split.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_itoa.o
RM = rm -f
NAME = libft.a
FLAGS = -Wall -Werror -Wextra -I/libtf.h
CC = cc

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJECTS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
