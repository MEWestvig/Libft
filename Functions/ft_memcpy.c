/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:07:06 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/17 14:14:10 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	char *str2;
	const char *str1;

	str2 = dst;
	str1 = src;
	while (n > 0)
	{
		*str2++ = *str1++;
		n--;
	}
	return (dst);
}
