/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:34:39 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 14:59:41 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*fraiche;
	unsigned char	*buff;

	i = 0;
	fraiche = (unsigned char*)dst;
	buff = (unsigned char*)src;
	while (i < n)
	{
		fraiche[i] = buff[i];
		i++;
	}
	return (dst);
}
