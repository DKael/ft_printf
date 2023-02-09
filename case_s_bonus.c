/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkael <hyungdki@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:17:03 by dmkael            #+#    #+#             */
/*   Updated: 2023/02/08 20:17:04 by dmkael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

void	case_s(t_pdata *data)
{
	char	*str;
	int		len;
	int		output_len;

	str = va_arg(data->arg, char *);
	if (str == NULL)
		str = "(null)";
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
