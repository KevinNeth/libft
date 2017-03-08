/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:34:42 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 15:02:34 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (little[0] == '\0')
		return ((char*)(big));
	while (big[i])
	{
		j = i;
		k = 0;
		while (big[j] == little[k])
		{
			j++;
			k++;
			if (little[k] == '\0')
				return ((char*)(&big[i]));
		}
		i++;
	}
	return (NULL);
}
