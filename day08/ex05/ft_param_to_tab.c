/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 18:21:51 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 18:44:34 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	j = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (j + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(src)))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*s;

	i = 0;
	s = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		s[i].size_param = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
		s[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	s[i].str = 0;
	return (s);
}
