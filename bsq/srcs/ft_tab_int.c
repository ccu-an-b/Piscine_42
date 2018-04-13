/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 13:42:10 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 22:49:06 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

int		**ft_create_tab_2(int lenght, int width)
{
	int **tab;
	int *tab2;
	int i;

	i = 0;
	tab = (int**)malloc(sizeof(int*) * width);
	tab2 = (int*)malloc(sizeof(int) * width * lenght);
	while (i < width)
	{
		tab[i] = &tab2[i * lenght];
		i++;
	}
	return (tab);
}

int		*ft_tab_map_conv(int index, char **map, t_map *infos)
{
	int *map_conv;
	int x;

	x = 0;
	map_conv = (int*)malloc(sizeof(int) * infos->lenght);
	while (x < infos->lenght)
	{
		if (map[index][x] == infos->ref_char[0])
			map_conv[x] = 1;
		if (map[index][x] == infos->ref_char[1])
			map_conv[x] = 0;
		x++;
	}
	return (map_conv);
}

void	ft_tabcpy(int *dest, int *src, int lenght)
{
	int i;

	i = 0;
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
}
