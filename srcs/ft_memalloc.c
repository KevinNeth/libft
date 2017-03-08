/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:49:05 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 15:04:56 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = (char*)malloc(sizeof(char) * (size))) == NULL)
		return (NULL);
	ft_memset(mem, 0, size);
	return (mem);
}
