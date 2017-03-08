/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:21:23 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 15:09:29 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_countword(const char *str, char c)
{
	size_t	i;
	int		w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (i < ft_strlen(str))
			w++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (w);
}
