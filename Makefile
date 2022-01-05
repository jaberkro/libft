# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jaberkro <jaberkro@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/18 18:15:51 by jaberkro      #+#    #+#                  #
#    Updated: 2022/01/05 09:30:53 by Jorien        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC = libft.h

FLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_intlen.c ft_printf.c ft_puthex_fd.c ft_putunbr_fd.c \
	ft_isspace.c

BNS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

NOBJ = $(SRC:.c=.o)

BOBJ =  $(BNS:.c=.o)

ifdef WITH_BONUS
OBJ = $(NOBJ) $(BOBJ)
else
OBJ = $(NOBJ)
endif

# COLORS
PINK	= \x1b[35m
BLUE	= \x1b[34m
YELLOW	= \x1b[33m
GREEN	= \x1b[32m
RED	= \x1b[31m
RESET	= \x1b[0m

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)
	@echo "$(RED)Done $(GREEN)COM$(YELLOW)PI$(BLUE)LING $(PINK)LIBFT$(RESET) :)"

%.o: %.c
	gcc -c $(FLAGS) -I $(INC) -o $@ $<

bonus: 
	$(MAKE) WITH_BONUS=1 all

clean:
	rm -f $(NOBJ) $(BOBJ)
	@echo "$(RED)DONE $(GREEN)CLEANING$(YELLOW) LIBFT$(PINK) :)$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)Done $(GREEN)FANCY CLEANING$(YELLOW) LIBFT$(PINK) :)$(RESET)"

re: fclean all
	@echo "$(RED)Done $(PINK)RE$(GREEN)COM$(YELLOW)PI$(BLUE)LING $(PINK)LIBFT$(RESET) :)"

.PHONY: all bonus clean fclean re
