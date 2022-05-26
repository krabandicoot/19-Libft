# -*- Makefile -*- #

#ar			
#ar -rcs == c create the archive if doesn't exist 
#			r replace, if the library exists, replace the old files in the library with new files
#			s sort create a sort of index to access the functions in the library faster
# $@ 		file name of the rules's target
# $<		file name of the first prerequisite
# $^		list of all the prerequisites 

SRCS		=	ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c\
				ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
				ft_strrchr.c ft_strnstr.c\
				ft_toupper.c ft_tolower.c ft_atoi.c ft_itoa.c\
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
				ft_memcmp.c\
				ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c \
				ft_split.c\
				ft_strmapi.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
				ft_lstiter.c ft_lstmap.c
OBJS		=	${SRCS:.c=.o}
OBJ_BONUS	=	${BONUS:.c=.o}
NAME		=	libft.a
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra

.c.o:		
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs $@ $^

all:		${NAME}

bonus:		${OBJ_BONUS}
			ar -rcs ${NAME} $^ 

clean:	
			rm -f ${OBJS} ${OBJ_BONUS}

fclean:		clean
			rm -f ${NAME}

re:			fclean
			${MAKE}

.PHONY:		all bonus clean fclean re