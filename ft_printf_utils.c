/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:44:51 by hyungdki          #+#    #+#             */
/*   Updated: 2023/02/07 16:44:52 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	init(t_pdata *data)
{
	data->idx = -1;
	data->head = 0;
	data->print_count = 0;
	data->flag = 0;
	data->width = 0;
	data->precision = 0;
}

t_bool	flags_check(char input)
{
	char	*cvs;
	int		idx;

	cvs = "# -+0.";
	idx = 0;
	while (cvs[idx] != '\0')
	{
		if (input == cvs[idx])
			return (TRUE);
		idx++;
	}
	if (ft_isdigit(input))
		return (TRUE);
	return (FALSE);
}

void	print_blank(t_pdata *data, int size)
{
	char	*box;
	int		idx;

	if (size > 0)
	{
		box = (char *)malloc(sizeof(char) * size);
		idx = 0;
		while (idx < size)
		{
			box[idx] = ' ';
			idx++;
		}
		write(1, box, size);
		free(box);
		data->print_count += size;
	}	
}

void	print_zero(t_pdata *data, int size)
{
	char	*box;
	int		idx;

	if (size > 0)
	{
		box = (char *)malloc(sizeof(char) * size);
		idx = 0;
		while (idx < size)
		{
			box[idx] = '0';
			idx++;
		}
		write(1, box, size);
		free(box);
		data->print_count += size;
	}
}

void	write_increase(t_pdata *data, char *to_write, int len)
{
	write(1, to_write, len);
	data->print_count += len;
}
