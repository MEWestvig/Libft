/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:54:04 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/23 11:50:41 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s)
{
	char	*str;
	int		new_len;
	int		begin_str;
	int		end_str;
	int		i;

	begin_str = 0;
	end_str = 0;
	i = 0;
	if (!*s)
		return (NULL);
	while (IS_SPACE(*s + i++))
	{
		begin_str++;
		end_str++;
	}
	while (*s + i++)
		end_str++;
	while(IS_SPACE(*s + i--))
		end_str--;
	new_len = end_str - begin_str;
	if (!(str = (char *)malloc(size_of(char) * new_len)))
		return (NULL);

}
