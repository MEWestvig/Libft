/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 13:16:39 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/24 09:20:25 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*ptr;
	int		i;

	i = 0;
	ch = (int)(c + '0');
	ptr = (char*)s;
	while (*ptr++)
		i++;
	if (*ptr == c)
		return (ptr);
	while (i-- > 0)
	{
		if (*ptr == c)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
