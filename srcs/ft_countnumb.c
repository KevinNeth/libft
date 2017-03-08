/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnumb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 11:04:50 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 14:57:13 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_countnumb(long long number)
{
	long long counter;

	counter = 0;
	if (!number)
		return (1);
	while (number)
	{
		number /= 10;
		counter++;
	}
	return (counter);
}
