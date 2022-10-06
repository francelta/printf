# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 18:13:31 by frcarras          #+#    #+#              #
#    Updated: 2022/10/06 11:13:48 by frcarras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_memset.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
	ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c \
	ft_strtrim.c ft_tolower.c ft_toupper.c ft_calloc.c ft_split.c ft_strlcpy.c\
	

OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c

BONUS_OBJS = $(SRC_BONUS:.c=.o)

CC = gcc

CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus : $(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
.PHONY	: all clean fclean re bonus		
