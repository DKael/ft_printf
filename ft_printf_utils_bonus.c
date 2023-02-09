/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkael <hyungdki@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:17:28 by dmkael            #+#    #+#             */
/*   Updated: 2023/02/08 20:17:29 by dmkael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

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
		if (box == NULL)
			return (set_error(data));
		idx = 0;
		while (idx < size)
		{
			box[idx] = ' ';
			idx++;
		}
		if (write(1, box, size) == -1)
		{
			free(box);
			return (set_error(data));
		}
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
		if (box == NULL)
			return (set_error(data));
		idx = 0;
		while (idx < size)
		{
			box[idx] = '0';
			idx++;
		}
		if (write(1, box, size) == -1)
		{
			free(box);
			return (set_error(data));
		}
		free(box);
		data->print_count += size;
	}
}

void	write_increase(t_pdata *data, char *to_write, int len)
{
	if (write(1, to_write, len) == -1)
		return (set_error(data));
	data->print_count += len;
}
