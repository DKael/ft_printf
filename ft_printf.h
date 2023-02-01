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

int		ft_printf(const char *format, ...);
bool	conversions_check(char input);
bool 	flags_check(char input);
void 	print_blank(int size);
void 	print_zero(int size);

#endif
