/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkael <hyungdki@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:47:12 by dmkael            #+#    #+#             */
/*   Updated: 2023/01/28 09:47:16 by dmkael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define SHARP_FLAG	1
# define BLANK_FLAG	2
# define MINUS_FLAG	4
# define PLUS_FLAG	8
# define ZERO_FLAG	16

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "libft/libft.h"

typedef struct s_pdata
{
	va_list			arg;
	int				idx;
	int				head;
	int				print_count;
	int				flag;
	int				width;
	int				precision;
	unsigned int	unum;
}	t_pdata;

typedef struct s_suffix
{
	char	*suffix;
	int		suffix_len;
}	t_suffix;

int		ft_printf(const char *format, ...);
void	format_read(const char *format, t_pdata *data);
void	format_print(const char *format, t_pdata *data);
void	case_c(t_pdata *data);
void	case_s(t_pdata *data);
void	case_p(t_pdata *data);
void	case_d_and_i(t_pdata *data);
void	case_u(t_pdata *data);
void	case_x_and_X(t_pdata *data, char x_chr);
void	case_percent(t_pdata *data);
void	init(t_pdata *data);
bool	flags_check(char input);
void	print_blank(int size);
void	print_zero(int size);

#endif
