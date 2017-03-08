/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:45:21 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 14:59:33 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ch_s;

	ch_s = (const char*)s;
	i = 0;
	while (i < n)
	{
		if (ch_s[i] == (char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}
