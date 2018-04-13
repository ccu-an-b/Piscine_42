/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:41:51 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 22:48:59 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

int			collect_info(char *str, t_map *ref_map)
{
	if (exist2lines(str))
	{
		write(2, "map error\n", 10);
		return (1);
	}
	if (collect_info_line1(str, ref_map))
	{
		write(2, "map error\n", 10);
		return (1);
	}
	if (collect_info_line2(str, ref_map))
	{
		write(2, "map error\n", 10);
		return (1);
	}
	if (ref_map->width == 0)
	{
		write(2, "map error\n", 10);
		return (1);
	}
	return (0);
}

int			collect_info_line2(char *str, t_map *ref_map)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\0')
		return (1);
	j = i + 1;
	while (str[j] != '\n')
	{
		j++;
	}
	ref_map->width = j - i - 1;
	return (0);
}

int			collect_info_line1(char *str, t_map *ref_map)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	if (i < 4)
		return (1);
	ref_map->ref_char[2] = str[i - 1];
	ref_map->ref_char[1] = str[i - 2];
	ref_map->ref_char[0] = str[i - 3];
	if (ref_map->ref_char[0] == ref_map->ref_char[1] ||
			ref_map->ref_char[0] == ref_map->ref_char[2] ||
			ref_map->ref_char[1] == ref_map->ref_char[2])
		return (1);
	str[i - 3] = '\0';
	if (onlynumbers(str) == 1 || ft_atoi(str) == 0)
		return (1);
	ref_map->lenght = ft_atoi(str);
	str[i - 3] = ref_map->ref_char[0];
	return (0);
}
