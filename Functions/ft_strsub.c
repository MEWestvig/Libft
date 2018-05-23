/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:16:11 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/23 10:28:53 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (!(str = (char *)malloc(size_of(char) * len)))
		return (NULL);
	while (*s++ && start-- > 0)
		;
	while (*s && len-- > 0)
		*str++ = *s++;
	*str = '\0';
	return (str);
}
