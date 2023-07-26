NAME	=	libftprintf.a
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I $(INCLUDE)
SRCDIR	=	./src/
OBJDIR	=	./obj/
INCLUDE	=	./include/
AR		=	ar rc

SRC		=	ft_printf.c	\
			ft_hex.c	\
			ft_nums.c	\
			ft_strs.c

OBJ		=	${addprefix $(OBJDIR), $(SRC:%.c=%.o)}


# ===== #


all:		$(NAME)

$(NAME):	$(OBJDIR) $(OBJ) libftmake
			$(AR) $(NAME) $(OBJ) libft/libft.a

libftmake:
			make -C libft/

clean:
			rm -rf $(OBJDIR)

fclean:		clean
			rm -rf $(NAME)
			make -C libft/ fclean

re:			fclean all

$(OBJDIR)%.o:	$(SRCDIR)%.c
				$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
				@mkdir -p $(OBJDIR)

.PHONY:		all clean fclean re libftmake
