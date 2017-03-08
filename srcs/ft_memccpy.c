/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:38:53 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 14:59:27 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
			size_t n)
{
	unsigned int	i;
	unsigned char	*fraiche;
	unsigned char	*buff;
	unsigned char	x;

	fraiche = (unsigned char*)dst;
	buff = (unsigned char*)src;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((*fraiche++ = *buff++) == x)
			return (fraiche);
		i++;
	}
	return (NULL);
}
