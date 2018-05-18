/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:45:54 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/18 12:03:14 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s2;
	int		i;

	if (dst == NULL || src == NULL)
		return (NULL);
	s2 = dst;
	i = 0;
	while (i < len)
	{
		while (*src)
		{
			*dst++ = *src++;
			i++;
		}
		*dst++ = '\0';
		i++;
	}
	return (s2);
}
