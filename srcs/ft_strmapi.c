/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:21:30 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 15:07:45 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*dst;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	dst = NULL;
	if (!(dst = (char*)malloc(sizeof(*dst) * (ft_strlen(s) + 1))))
		return (NULL);
	if (dst != NULL)
	{
		while (s[i])
		{
			dst[i] = (*f)(i, s[i]);
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}
