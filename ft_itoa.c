/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <m.westvig@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:31:57 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/24 16:01:59 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_chars(int num)
{
	int		i;

	i = 1;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num > 0)
	{
		i++;
		num /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	ncpy;

	len = count_chars(n);
	str = (char *)malloc(sizeof(char) * len);
	if (n < 0)
		ncpy = -n;
	else
		ncpy = n;
	str[--len] = ncpy % 10 + '0';
	while (ncpy /= 10)
		str[--len] = ncpy % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
