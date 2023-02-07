/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:45:27 by hyungdki          #+#    #+#             */
/*   Updated: 2023/02/07 16:45:28 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	case_s(t_pdata *data)
{
	char	*str;
	int		str_len;

	str = va_arg(data->arg, char *);
	str_len = ft_strlen(str);
	if (data->flag & MINUS_FLAG)
	{
		write(1, str, data->precision);
		if (data->width != 0)
			print_blank(data->width - data->precision);
	}
	else
	{
		if (data->width != 0)
			print_blank(data->width - data->precision);
		write(1, str, data->precision);
	}
}