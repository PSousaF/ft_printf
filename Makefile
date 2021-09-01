NAME	=	libftprintf.a

MYLIB	=	ft_printf.h

CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRCS:.c=.o}

OBJS_B	=	${SRCS_BONUS:.c=.o}

LIB		=	ar -rcs

RM		=	rm -f

SRCS	=	${FILES}

FILES 	=	ft_printf.c ft_printf_hex.c ft_printf_integers.c utils_strings.c \
			ft_printf_strings.c utils_hex.c utils_integers.c utils_others.c \
			utils_pointer.c

all:		${NAME}

${NAME}:	${OBJS} ${MYLIB} 
			@echo "Convertendo itens..."
			${LIB} ${NAME} ${OBJS}
			@echo "Libft compilado com sucesso!"

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			@echo "Deletando Arquivos .o"
			${RM} ${OBJS}
			${RM} ${OBJS_B}
			@echo "Arquivos .o Deletado Com Sucesso!"

fclean:		clean
			@echo "Deletando Restante dos Arquivos"
			${RM} ${NAME}
			@echo "Todos Arquivos Deletado Com Sucesso!"

re:			fclean all
			@echo "Arquivos Recompilado Com Sucesso!"

.PHONY:		all clean fclean re
