/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:21:38 by hyungdki          #+#    #+#             */
/*   Updated: 2023/02/02 16:21:39 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <stdlib.h>

static char	*conversion(unsigned int n, int digit, char chr_x);

char	*ft_itoa_hex(unsigned int n, char chr_x)
{
	int				digit;
	unsigned int	temp_n;
	char			*result;

	temp_n = n;
	digit = 0;
	while (temp_n != 0)
	{
		digit++;
		temp_n /= 16;
	}
	if (n == 0)
	{
		result = (char *)malloc(sizeof(char) * 2);
        if (result == (void *)0)
            return ((void *)0);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	else
		return (conversion(n, digit, chr_x));
}

static char	*conversion(unsigned int n, int digit, char chr_x)
{
	char	*result;
	char	*base;

	result = (char *)malloc(sizeof(char) * (digit + 1));
    if (result == (void *)0)
        return ((void *)0);
	result[digit--] = '\0';
	if (chr_x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	while (n != 0)
	{
		result[digit--] = base[(n % 16)];
		n /= 16;
	}
	return (result);
}
