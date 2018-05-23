/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:47:44 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/23 10:14:10 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	if (!*s1 || !*s2)
		return (0);
	while (*s1 && *s2)
		if (*s1++ != *s2++)
			return (0);
	return (1);
}
