/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:22:14 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/23 20:08:57 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		n;

	n = (int)size;
	if (!(str = (char *)malloc(n + 1)))
		return (NULL);
	while (n-- > -1)
		*str++ = '\0';
	*str = '\0';
	return (str);
}
