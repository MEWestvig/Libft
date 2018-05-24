/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:54:19 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/18 13:10:24 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char ch;
	char *ptr;

	ch = (int)(c + '0');
	ptr = (char*)s;
	while (*ptr++)
	{
		if (*ptr == c)
			return (ptr);
	}
	if (*ptr == c)
		return (ptr);
	return (NULL);
}
