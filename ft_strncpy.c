/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:45:54 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/24 16:07:36 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s2;
	size_t	i;

	if (dst == NULL || src == NULL)
		return (NULL);
	s2 = dst;
	i = -1;
	while (++i < len)
	{
		while (*src)
			*dst++ = *src++;
		*dst++ = '\0';
	}
	return (s2);
}
