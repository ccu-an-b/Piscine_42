/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 13:42:10 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 22:49:04 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *cpy;

	cpy = NULL;
	if (src)
	{
		cpy = (char*)malloc(sizeof(*cpy) * (ft_strlen(src) + 1));
		if (cpy)
			cpy = ft_strcpy(cpy, src);
	}
	return (cpy);
}

int		ft_atoi(char *str)
{
	int i;
	int ntrue;
	int n;

	i = 0;
	n = 0;
	ntrue = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		ntrue = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + ((int)str[i] - '0');
		i++;
	}
	if (ntrue == 1)
		return (-n);
	else
		return (n);
}
