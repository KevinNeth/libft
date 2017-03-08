/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneth <kneth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:22:57 by kneth             #+#    #+#             */
/*   Updated: 2017/03/08 15:08:53 by kneth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_countstr(const char *s, char c, int g, int *n)
{
	char	*str;
	int		t;
	int		i;

	i = 0;
	while (s[*n] == c)
		++*n;
	t = *n;
	while (s[*n] != c && s[*n] != '\0')
	{
		++*n;
		g++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (g + 1))))
		return (NULL);
	str[g] = '\0';
	while (i < g)
	{
		str[i] = s[t + i];
		i++;
	}
	return (str);
}

char			**ft_strsplit(const char *s, char c)
{
	int		i;
	int		z;
	char	**tab;

	z = 0;
	i = 0;
	if (!(tab = ((char **)malloc(sizeof(char *) *
		(ft_countword(s, c) + 1)))))
		return (NULL);
	while (i < ft_countword(s, c))
	{
		tab[i] = ft_countstr(s, c, 0, &z);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
