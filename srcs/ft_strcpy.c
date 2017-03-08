/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:36:44 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 15:01:04 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t size;
	size_t i;

	i = 0;
	size = ft_strlen(src) + 1;
	while (i < size)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	return (dst);
}
