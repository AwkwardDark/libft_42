# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 16:34:24 by pajimene          #+#    #+#              #
#    Updated: 2024/05/28 17:00:14 by pajimene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_itoa.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_split.c \
      ft_strchr.c \
      ft_strdup.c \
      ft_striteri.c \
      ft_strjoin.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strmapi.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strtrim.c \
      ft_substr.c \
      ft_tolower.c \
      ft_toupper.c \
	  ft_printf.c \
	  ft_printf_utils.c \
	  ft_printf_utils_hex.c \
	  get_next_line.c

SRC_B = ft_lstadd_back_bonus.c \
        ft_lstadd_front_bonus.c \
        ft_lstclear_bonus.c \
        ft_lstdelone_bonus.c \
        ft_lstiter_bonus.c \
        ft_lstlast_bonus.c \
        ft_lstmap_bonus.c \
        ft_lstnew_bonus.c \
        ft_lstsize_bonus.c

OBJS = $(SRC:.c=.o)
OBJS_B = $(SRC_B:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -nostartfiles -fPIC  -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_B)
	$(AR) $(NAME) $(OBJS) $(OBJS_B)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re