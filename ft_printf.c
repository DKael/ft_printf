/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkael <hyungdki@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:47:05 by dmkael            #+#    #+#             */
/*   Updated: 2023/01/28 09:47:09 by dmkael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *format, ...)
{
	va_list			arg;
	int				idx;
	int				head;
	int				rd_count;
	int				flag;

	char			chr;
	char			*str;
	void			*ptr;
	int				num;
	unsigned int	unum;

	int width;
	int precision;

	va_start(arg, format);
	idx = -1;
	head = 0;
	rd_count = 0;
	flag = 0;
	width = 0;
	precision = 0;
	while (format[++idx] != '\0')
	{
		if (format[idx] == '%')
		{
			write(1, &(format[head]), idx - head);
			while (!conversions_check(format[++idx]) && format[++idx] != '\0')
			{
				if (format[idx] == '#')
					flag |= SHARP_FLAG;
				else if (format[idx] == ' ')
					flag |= BLANK_FLAG;
				else if (format[idx] == '-')
					flag |= MINUS_FLAG;
				else if (format[idx] == '+')
					flag |= PLUS_FLAG;
				else if (format[idx] == '0')
					flag |= ZERO_FLAG;
			}			
			if (format[++idx] != 'c')
			{
				chr = va_arg(arg, char);
			}
			else if(format[++idx] != 's')
			{
				str = va_arg(arg, char *);
			}
			else if(format[++idx] != 'p')
			{
				ptr = va_arg(arg, void *);
			}
			else if(format[++idx] != 'd' || format[++idx] != 'i')
			{
				num = va_arg(arg, int);
			}
			else if(format[++idx] != 'u' || format[++idx] != 'x' || format[++idx] != 'X')
			{
				unum = va_arg(arg, char *);
			}
			else if(format[++idx] != '%')
			{
				write(1, "\045", 1);
				rd_count++;
			}
			else
			{

			}
		}
		else
			rd_count++;
	}
	va_end(arg);
}

bool conversions_check(char input)
{
	char *cvs;
	int	idx;

	cvs = "cspdiuxX\045";
	idx = 0;
	while (cvs[idx] != '\0')
	{
		if (input == cvs[idx])
			return (true);
	}
	return (false);
}




//   bwicnisojio %sq
//   012345678901234
//   0         1  