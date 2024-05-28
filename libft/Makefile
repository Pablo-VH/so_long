# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 16:32:56 by pavicent          #+#    #+#              #
#    Updated: 2024/02/20 10:52:07 by pavicent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= -rcs

SRC			=	ft_atoi.c\
		  		ft_calloc.c\
		  		ft_isalnum.c\
		   		ft_isalpha.c\
		  		ft_isascii.c\
		  		ft_isdigit.c\
		  		ft_isprint.c\
		  		ft_memcpy.c\
		  		ft_memchr.c\
		  		ft_memcmp.c\
		  		ft_memmove.c\
		  		ft_memset.c\
		  		ft_strlcat.c\
		  		ft_strdup.c\
		  		ft_strlcpy.c\
		  		ft_strchr.c\
		  		ft_strlen.c\
		  		ft_strncmp.c\
		  		ft_strnstr.c\
		  		ft_strrchr.c\
		  		ft_tolower.c\
		  		ft_toupper.c\
		  		ft_bzero.c\
		  		ft_substr.c\
		  		ft_strjoin.c\
		  		ft_strtrim.c\
		 		ft_split.c\
		 		ft_itoa.c\
		 		ft_strmapi.c\
		  		ft_striteri.c\
		  		ft_putchar_fd.c\
		  		ft_putstr_fd.c\
		  		ft_putendl_fd.c\
		  		ft_putnbr_fd.c\
				get_next_line.c\

SRCBONUS	= 	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c\

OBJ			= 	$(SRC:.c=.o)

OBJBONUS	= 	$(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(ARFLAGS) $(NAME) $(OBJ)

bonus: $(OBJBONUS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJBONUS)

clean:
		rm -f $(OBJ) $(OBJBONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY:	fclean all clean all bonus
