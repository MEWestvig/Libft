/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <m.westvig@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:00:47 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/23 18:24:43 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		found;
	int		i;
	int		j;
	int		k;

	i = -1;
	found = 1;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (*(haystack + ++i) && i < (int)len)
	{
		j = 0;
		if (*(haystack + i) == *needle)
		{
			k = i;
			found = 1;
			while (*(needle + j) && *(haystack + k) && j < (int)len && k < (int)len)
				if (*(haystack + k++) != *(needle + j++))
					found = 0;
			if (found && !*(needle + j))
				return ((char *)(haystack + i));
		}
	}
	return (NULL);
}
