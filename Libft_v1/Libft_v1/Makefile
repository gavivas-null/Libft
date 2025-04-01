SRC = ft_putchar.c \
ft_putdec.c \
ft_putptr.c \
ft_putptc.c \
ft_putstr.c \

OBJBONUS	=	$(SRCBONUS:.c=.o)
OBJ	=	$(SRC:.c=.o)
CC	 =	gcc
AR = ar
CFLAGS	=	-Wall -Werror -Wextra
ARFLAG = -rcs
NAME =	libftprintf.a

all: ${NAME}

${NAME}: ${OBJ}
	$(AR) $(ARFLAG) $(NAME) $(OBJ) 

clean:
	rm -f ${OBJ} ${OBJBONUS}
fclean: clean 
	rm -f ${NAME}
re: fclean all

.PHONY: all clean fclean re