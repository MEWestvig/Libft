/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:13:23 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/23 20:04:47 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize < dlen + 1)
		return (0);
	while (*dst++)
		;
	while (*src && i < dstsize)
	{
		i++;
		*dst++ = *src++;
	}
	if (i < dstsize)
		*dst = '\0';
	return (slen + dlen);
}
