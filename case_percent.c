/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:45:22 by hyungdki          #+#    #+#             */
/*   Updated: 2023/02/07 16:45:23 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	case_percent(t_pdata *data)
{
	if (data->flag & MINUS_FLAG)
	{
		write_increase(data, "\045", 1);
		if (data->width != 0)
			print_blank(data, data->width - 1);
	}
	else
	{
		if (data->width != 0)
			print_blank(data, data->width - 1);
		write_increase(data, "\045", 1);
	}
}
