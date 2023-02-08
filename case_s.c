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
	int		len;

	str = va_arg(data->arg, char *);
	len = ft_strlen(str);
	if (data->flag & MINUS_FLAG)
	{
		write_increase(data, str, data->precision);
		if (data->width != 0)
			print_blank(data, data->width - data->precision);
	}
	else
	{
		if (data->width != 0)
			print_blank(data, data->width - data->precision);
		write_increase(data, str, data->precision);
	}
}
