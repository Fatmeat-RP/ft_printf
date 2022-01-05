# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 23:36:11 by acarle-m          #+#    #+#              #
#    Updated: 2022/01/05 05:52:01 by acarle-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	$(BUILDDIR)libft.a

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

OBJSDIR		=	objs/

BUILDDIR	=	build/

SRCSDIR		=	src/

OBJS		=	$(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)

SRCS		=	$(wildcard $(SRCSDIR)*.c)

HEADER		=	-I include -I libft

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				mkdir -p $(BUILDDIR)
				ar rcs $(NAME) $(OBJS)

$(OBJS)		:	$(OBJSDIR)%.o : $(SRCSDIR)%.c
				mkdir -p $(OBJSDIR)
				$(CC) $(FLAGS) ${HEADER} -c $< -o $@

clean		:
				rm -rf $(OBJSDIR)

fclean		:	clean
				rm -rf $(BUILDDIR)

re			:	fclean all

.PHONY		:	all re clean fclean