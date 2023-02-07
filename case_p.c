/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:45:14 by hyungdki          #+#    #+#             */
/*   Updated: 2023/02/07 16:45:19 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	p_with_minus(t_pdata *data, int len, char *addr);
static void	p_without_minus(t_pdata *data, int len, char *addr);

void	case_p(t_pdata *data)
{
	void	*ptr;
	int		len;
	char	*addr;

	ptr = va_arg(data->arg, void *);
	addr = ft_itoa_ptr(ptr);
	len = ft_strlen(addr);
	if (data->flag & MINUS_FLAG)
		p_with_minus(data, len, addr);
	else
		p_without_minus(data, len, addr);
	free(addr);
}

static void	p_with_minus(t_pdata *data, int len, char *addr)
{
	write(1, "0x", 2);
	if (data->precision != 0)
		print_zero(data->precision - len);
	write(1, addr, len);
	if (data->width != 0)
	{
		if (len > data->precision)
			print_blank(data->width - len - 2);
		else
			print_blank(data->width - data->precision - 2);
	}
}

static void	p_without_minus(t_pdata *data, int len, char *addr)
{
	if (data->flag & ZERO_FLAG && data->precision == 0)
	{
		write(1, "0x", 2);
		if (data->width != 0)
			print_zero(data->width - len - 2);
	}
	else
	{
		if (data->width != 0)
		{
			if (len > data->precision)
				print_blank(data->width - len - 2);
			else
				print_blank(data->width - data->precision - 2);
		}
		write(1, "0x", 2);
		if (data->precision != 0)
			print_zero(data->precision - len);
	}
	write(1, addr, len);
}
