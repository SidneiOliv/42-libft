# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 11:46:20 by sde-oliv          #+#    #+#              #
#    Updated: 2024/10/31 19:21:11 by sde-oliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME_PROJ = libft.a
NAME_EXEC = mainlibft.out	

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
 ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
   ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c

OBJ = $(SRC:.c=.o)

LIBFT = libft.a
MAIN = main11_isalpha_strlen.c
OBJ_MAIN = $(MAIN:.c=.o)

all: $(NAME_PROJ)
	@echo "all..."

$(NAME_PROJ): $(OBJ)
	@echo "NAME_PROJ..."
	ar rcs $(NAME_PROJ) $(OBJ)

#obj:
#	$(SRC: .c=.o)

clean:
	@echo "clean..."
	rm -fr *.o

fclean: clean
	@echo "fclean..."
	rm -fr $(NAME_PROJ)

re: fclean all
	@echo "re..."

##testermain

test: all $(LIBFT) $(MAIN)
	@echo "CC test..."
	$(CC) $(CFLAGS) $(MAIN) $(LIBFT) -o $(NAME_EXEC)

tclean :
	@echo "tclean..."
	rm -fr *.out

