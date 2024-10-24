# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 20:49:13 by wdaoudi-          #+#    #+#              #
#    Updated: 2024/10/18 19:41:43 by wdaoudi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
       ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
       ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c ft_striteri.c ft_substr.c \
       ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
       get_next_line.c get_next_line_utils.c ft_strjoin_free.c \

SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
        ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
        ft_lstmap.c $(SRCS)

NAME = libft.a
OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)

OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

OBJSB = $(SRCSB:.c=.o)

VPATH = .:get_next_line

OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

CC = cc

CC_FLAGS = -Wall -Wextra -Werror -g3

$(OBJS_DIR)%.o : %.c #libft.h get_next_line/get_next_line.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJECTS_BONUS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
	@echo "Libft Bonus Done !"

.PHONY: all clean fclean re bonus