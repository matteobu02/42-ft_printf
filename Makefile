NAME	=	libftprintf.a

LIBFT	=	libft.a

LIBFT_PATH	=	libft/

SRCS	=	./srcs/ft_printf.c	\
			./srcs/ft_hex.c	\
			./srcs/ft_nums.c	\
			./srcs/ft_strs.c	\

SRCS_OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

FLAGS	=	-Wall -Wextra -Werror

LM	=	ar rc

LIBFT_OBJS	=	$(LIBFT_PATH)*.o

LIBFT_MAKE	=	$(MAKE) -C $(LIBFT_PATH)


all:	$(NAME)

$(NAME):	$(SRCS_OBJS) libftmake
				$(LM) $(NAME) $(SRCS_OBJS) $(LIBFT_OBJS)

libftmake:
			$(LIBFT_MAKE)

clean:
			make -C $(LIBFT_PATH) clean
			rm -rf $(SRCS_OBJS) 

fclean:		clean
			rm -rf $(NAME) $(LIBFT_PATH)$(LIBFT)

re:			fclean all

.PHONY:		all clean fclean re
