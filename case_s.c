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

static void	print_null(t_pdata *data);

void	case_s(t_pdata *data)
{
	char	*str;
	int		len;
	int		output_len;

	str = va_arg(data->arg, char *);
	if (str == NULL)
		return (print_null(data));
	len = ft_strlen(str);
	output_len = len;
	if (data->flag & PRECISION && len >= data->precision)
		output_len = data->precision;
	else if (data->flag & PRECISION && len < data->precision)
		output_len = len;
	if (data->flag & MINUS_FLAG)
	{
		write_increase(data, str, output_len);
		if (data->width != 0)
			print_blank(data, data->width - output_len);
	}
	else
	{
		if (data->width != 0)
			print_blank(data, data->width - output_len);
		write_increase(data, str, output_len);
	}
}

static void	print_null(t_pdata *data)
{
	write(1, "(null)", 6);
	data->print_count += 6;
}
