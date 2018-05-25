/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:43:28 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/24 16:10:20 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	i = -1;
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (*(s + ++i))
		*str++ = f(i, *(s + i));
	return (str);
}
