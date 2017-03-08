# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kneth <kneth@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/08 14:23:14 by kneth             #+#    #+#              #
#    Updated: 2017/03/08 15:17:45 by kneth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = srcs

SRC_NAME =	ft_strlen.c	ft_strdup.c	ft_strcpy.c ft_strncpy.c				\
			ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c				\
			ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c			 	\
			ft_strncmp.c ft_strnew.c ft_strdel.c ft_strclr.c				\
			ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c				\
			ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c				\
			ft_strtrim.c ft_strsplit.c ft_strndup.c							\
																			\
			ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c				\
			ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c				\
																			\
			ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isalnum.c				\
			ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c				\
																			\
			ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c			\
			ft_putnbr.c ft_putnbr_fd.c ft_putendl.c ft_putendl_fd.c			\
																			\
			ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c				\
			ft_lstiter.c ft_lstmap.c ft_lstaddend.c							\
																			\
			ft_atoi.c ft_itoa.c	ft_atoll.c									\
																			\
			get_next_line.c													\
																			\
			ft_abs.c ft_countrec.c ft_countword.c ft_detente.c				\
			ft_intlen.c ft_strlen_nosp.c ft_countnumb.c	ft_uitoa_base.c		\
			ft_lengthbytes.c ft_checksizebytes.c ft_atoi_base.c				\

SRC = $(addprefix $(SRCDIR)/, $(SRC_NAME))

OBJDIR = objs

OBJ = $(addprefix $(OBJDIR)/, $(SRC_NAME:.c=.o))

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@/bin/mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -I./includes -c -o $@ $<

clean:
	@echo Cleaning libft s objs...
	@/bin/rm -Rf $(OBJDIR)

fclean: clean
	@echo Cleaning libft.a...
	@/bin/rm -Rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
