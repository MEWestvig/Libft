/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 13:16:39 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/25 10:23:59 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen(s) + 1;
	while (--i)
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	return (NULL);
}
