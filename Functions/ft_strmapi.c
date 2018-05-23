/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:43:28 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/23 09:47:06 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	i = -1;
	str = (char *)malloc(size_of(char) * ft_strlen(s));
	if (s && f)
		while (*(s + ++i))
			*str++ = f(i, *(s + i));
	return (str);
}
