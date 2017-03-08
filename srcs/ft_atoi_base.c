/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:43:10 by kneth             #+#    #+#             */
/*   Updated: 2017/03/03 16:45:03 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static int		find_base(char c, int base)
{
	int		i;
	char	*def;

	i = 0;
	def = "0123456789ABCDEF";
	while (i < base)
	{
		if (def[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int				ft_atoi_base(const char *str, int str_base)
{
	int ret;
	int	sign;

	ret = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && *str != ' ')
	{
		if (find_base(to_upper(*str), str_base) != -1)
			ret = (ret * str_base) + find_base(to_upper(*str), str_base);
		str++;
	}
	return (sign * ret);
}
