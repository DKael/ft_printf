# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyungdki <hyungdki@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 13:30:01 by hyungdki          #+#    #+#              #
#    Updated: 2022/12/28 13:30:02 by hyungdki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		ft_printf_utils.c \
		case_c.c \
		case_d_and_i.c \
		case_p.c \
		case_percent.c \
		case_s.c \
		case_u.c \
		case_x.c \
		ft_itoa_hex.c \
		ft_itoa_ptr.c \
		ft_itoa_unsigned.c \
		error.c

OBJS = 	${SRCS:.c=.o}

SRCS_BONUS =	ft_printf_bonus.c \
				ft_printf_utils_bonus.c \
				case_c_bonus.c \
				case_d_and_i_bonus.c \
				case_p_bonus.c \
				case_percent_bonus.c \
				case_s_bonus.c \
				case_u_bonus.c \
				case_x_bonus.c \
				ft_itoa_hex_bonus.c \
				ft_itoa_ptr_bonus.c \
				ft_itoa_unsigned_bonus.c \
				error_bonus.c

OBJS_BONUS = 	${SRCS_BONUS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

LIBFT_DIR = libft

LIBFT_NAME = libft.a

ifdef WITH_BONUS
	TOTAL_OBJS = ${OBJS_BONUS}
else
	TOTAL_OBJS = ${OBJS}
endif

${NAME} : ${TOTAL_OBJS}
		make -C ${LIBFT_DIR} all
		cp ${LIBFT_DIR}/${LIBFT_NAME} ${NAME}
		ar -rsc $@ $^
	
%.o :%.c
	${CC} ${CFLAGS} -c -I. $< -o $@

all : ${NAME}

clean:
	make -C ${LIBFT_DIR} clean
	rm -f ${OBJS} ${OBJS_BONUS}

fclean: 
	make clean
	rm -f ${NAME} ${LIBFT_NAME}

re: 
	make fclean
	make all

bonus:
	@make WITH_BONUS=1

.PHONY: all clean fclean re bonus
