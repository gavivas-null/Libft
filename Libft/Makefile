SRC	=	ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_strchr.c\
ft_strrchr.c\
ft_strlen.c\
ft_tolower.c\
ft_toupper.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c  \
ft_putnbr_fd.c \
ft_striteri.c \
ft_strmapi.c \
ft_itoa.c \
ft_split.c \

SRCBONUS	=	ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \

OBJBONUS	=	$(SRCBONUS:.c=.o)
OBJ	=	$(SRC:.c=.o)
CC	 =	gcc
AR = ar
CCFLAGS	=	-Wall -Werror -Wextra
ARFLAG = r
NAME =	libft.a

all: ${NAME}

${NAME}: ${OBJ}
	$(AR) $(ARFLAG) $(NAME) $(OBJ) 

bonus : ${OBJS} ${OBJBONUS}
	$(AR) $(ARFLAG) $(NAME) $(OBJBONUS) $(OBJS)

clean:
	rm -f ${OBJ} ${OBJBONUS}
fclean: clean 
	rm -f ${NAME}
re: fclean all

.PHONY: all clean fclean re