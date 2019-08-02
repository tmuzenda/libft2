# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 13:49:11 by tmuzenda          #+#    #+#              #
#    Updated: 2019/08/02 12:03:47 by tmuzenda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strcmp.c ft_strncmp.c ft_strchr.c ft_strstr.c ft_strrchr.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putchar.c ft_putstr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr.c ft_putnbr_fd.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_putendl.c ft_putendl_fd.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c

OBJECTS= ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_bzero.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strcmp.o ft_strncmp.o ft_strchr.o ft_strstr.o ft_strrchr.o ft_strnstr.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_putchar.o ft_putstr.o ft_putchar_fd.o ft_putstr_fd.o ft_putnbr.o ft_putnbr_fd.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_putendl.o ft_putendl_fd.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o
INCLUDE=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
		@gcc -c -Wall -Wextra -Werror   $(SRCS) $(INCLUDES)
		@ar rc $(NAME) $(OBJECTS)
		@ranlib $(NAME)

clean:
		@/bin/rm -f $(OBJECTS)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
