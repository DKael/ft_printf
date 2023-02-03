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

int	ft_printf(const char *format, ...)
{
	va_list			arg;
	int				idx;
	int				head;
	int				print_count;
	int				flag;

	char			chr;
	char			*str;
	void			*ptr;
	int				num;
	unsigned int	unum;

	int width;
	int precision;

	int str_len;

	va_start(arg, format);
	idx = -1;
	head = 0;
	print_count = 0;
	flag = 0;
	width = 0;
	precision = 0;
	while (format[++idx] != '\0')
	{
		if (format[idx] == '%')
		{
			write(1, &(format[head]), idx - head);
			while (flags_check(format[++idx]))
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
				else if (ft_isdigit(format[idx]))
				{
					width = format[idx] - '0';
					while (ft_isdigit(format[++idx]))
						width = width * 10 + (format[idx] - '0');
					idx--;
				}
				else if (format[idx] == '.' )
				{
					precision = 0;
					while (ft_isdigit(format[++idx]))
						precision = precision * 10 + (format[idx] - '0');
					idx--;
				}
			}
//---------------------------------------------------------------------------------------------------------------
			if (format[idx] == 'c')
			{
				chr = va_arg(arg, int);
				if (flag & MINUS_FLAG)
				{
					write(1, &chr, 1);
					if (width != 0)
						print_blank(width - 1);
				}
				else
				{
					if (width != 0)
						print_blank(width - 1);
					write(1, &chr, 1);
				}
					head = idx + 1;
					precision = 0;
					width = 0;
					print_count++;
			}
//---------------------------------------------------------------------------------------------------------------
			else if(format[idx] == 's')
			{
				str = va_arg(arg, char *);
				str_len = ft_strlen(str);
				if (flag & MINUS_FLAG)
				{
					write(1, str, precision);
					if (width != 0)
						print_blank(width - precision);
				}
				else
				{
					if (width != 0)
						print_blank(width - precision);
					write(1, str, precision);
				}
				head = idx + 1;
				flag = 0;
				precision = 0;
				width = 0;
				print_count++;
			}
//---------------------------------------------------------------------------------------------------------------
			else if(format[idx] == 'p')
			{
				ptr = va_arg(arg, void *);
				

				int		len;
				char	*addr;

				addr = ft_itoa_ptr(ptr);
				len = ft_strlen(addr);
				if (flag & MINUS_FLAG)
				{
					write(1, "0x", 2);
					if (precision != 0)
						print_zero(precision - len);
					write(1, addr, len);
					if (width != 0)
					{
						if (len > precision)
							print_blank(width - len  - 2);
						else
							print_blank(width - precision - 2);
					}
				}
				else
				{
					if (flag & ZERO_FLAG && precision == 0)
					{
						write(1, "0x", 2);
						if (width != 0)
						{
							if (len > precision)
								print_zero(width - len - 2);
							else
								print_zero(width - precision - 2);
						}
						if (precision != 0)
							print_zero(precision - len);
						write(1, addr, len);
					}
					else 
					{
						if (width != 0)
						{
							if (len > precision)
								print_blank(width - len - 2);
							else
								print_blank(width - precision - 2);
						}
						write(1, "0x", 2);
						if (precision != 0)
							print_zero(precision - len);
						write(1, addr, len);
					}
				}
				free(addr);
				head = idx + 1;
				flag = 0;
				precision = 0;
				width = 0;
				print_count++;
			}
//---------------------------------------------------------------------------------------------------------------
			else if(format[idx] == 'd' || format[idx] == 'i')
			{
				num = va_arg(arg, int);
			}
//---------------------------------------------------------------------------------------------------------------
			else if(format[idx] == 'u')
			{
				unum = va_arg(arg, unsigned int);

			}
//---------------------------------------------------------------------------------------------------------------
			else if(format[idx] == 'x' || format[idx] == 'X')
			{
				unum = va_arg(arg, unsigned int);

				int		len;
				char	*hex;
				char	*suffix;
				int		suffix_len;

				hex = ft_itoa_hex(unum, format[idx]);
				len = ft_strlen(hex);
				suffix_len = 0;
				if (flag & SHARP_FLAG && unum != 0)
				{
						suffix = "0x";
						if (format[idx] == 'X')
							suffix = "0X";
						suffix_len = 2;
				}
				if (flag & MINUS_FLAG)
				{
					if (flag & SHARP_FLAG && unum != 0)
						write(1, suffix, suffix_len);
					if (precision != 0)
						print_zero(precision - len);
					write(1, hex, len);
					if (width != 0)
					{
						if (len > precision)
							print_blank(width - len  - suffix_len);
						else
							print_blank(width - precision - suffix_len);
					}
				}
				else
				{
					if (flag & ZERO_FLAG && precision == 0)
					{
						if (flag & SHARP_FLAG && unum != 0)
							write(1, suffix, suffix_len);
						if (width != 0)
						{
							if (len > precision)
								print_zero(width - len - suffix_len);
							else
								print_zero(width - precision - suffix_len);
						}
						if (precision != 0)
							print_zero(precision - len);
						write(1, hex, len);
					}
					else 
					{
						if (width != 0)
						{
							if (len > precision)
								print_blank(width - len - suffix_len);
							else
								print_blank(width - precision - suffix_len);
						}
						if (flag & SHARP_FLAG && unum != 0)
							write(1, suffix, suffix_len);
						if (precision != 0)
							print_zero(precision - len);
						write(1, hex, len);
					}
				}
				free(hex);
				head = idx + 1;
				flag = 0;
				precision = 0;
				width = 0;
				print_count++;
			}
//---------------------------------------------------------------------------------------------------------------
			else if(format[idx] == '%')
			{
				if (flag & MINUS_FLAG)
				{
					write(1, "\045", 1);
					if (width != 0)
						print_blank(width - 1);
				}
				else
				{
					if (width != 0)
						print_blank(width - 1);
					write(1, "\045", 1);
				}
				head = idx + 1;
				flag = 0;
				precision = 0;
				width = 0;
				print_count++;
			}
//---------------------------------------------------------------------------------------------------------------
			else
			{
				head = idx;
				print_count++;
			}
		}
		else
			print_count++;		
	}
	write(1, &(format[head]), idx - head);
	va_end(arg);
	return (print_count);
}

bool flags_check(char input)
{
	char *cvs;
	int	idx;

	cvs = "# -+0.";
	idx = 0;
	while (cvs[idx] != '\0')
	{
		if (input == cvs[idx])
			return (true);
		idx++;
	}
	if (ft_isdigit(input))
		return (true);
	return (false);
}

void print_blank(int size)
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
	}	
}

void print_zero(int size)
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
	}
}
