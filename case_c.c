/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:45:05 by hyungdki          #+#    #+#             */
/*   Updated: 2023/02/07 16:45:07 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	case_c(t_pdata *data)
{
	char	chr;

	chr = va_arg(data->arg, int);
	if (data->flag & MINUS_FLAG)
	{
		write(1, &chr, 1);
		if (data->width != 0)
			print_blank(data->width - 1);
	}
	else
	{
		if (data->width != 0)
			print_blank(data->width - 1);
		write(1, &chr, 1);
	}
}
