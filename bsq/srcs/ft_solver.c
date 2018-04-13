/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:00:55 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 22:49:03 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

void	ft_tab_cmp_init(int index, int **tab_cmp, char **map, t_map *infos)
{
	int *map_conv;

	if (index == 0)
	{
		map_conv = ft_tab_map_conv(0, map, infos);
		ft_tabcpy(tab_cmp[0], map_conv, infos->lenght);
		map_conv = ft_tab_map_conv(1, map, infos);
		ft_tabcpy(tab_cmp[1], map_conv, infos->lenght);
	}
	else
	{
		map_conv = ft_tab_map_conv(index + 1, map, infos);
		ft_tabcpy(tab_cmp[0], tab_cmp[1], infos->lenght);
		ft_tabcpy(tab_cmp[1], map_conv, infos->lenght);
	}
}

int		ft_int_cmp(int a, int b, int c)
{
	int temp;

	temp = a;
	if (a > b)
		temp = b;
	if (b > c)
		temp = c;
	if (c > a)
		temp = a;
	return (temp + 1);
}

void	ft_tab_solver(int **tab_cmp, t_map *infos, int index)
{
	int i;

	i = 1;
	while (i < infos->lenght)
	{
		if (tab_cmp[1][i] != 0)
		{
			tab_cmp[1][i] = ft_int_cmp(tab_cmp[0][i],
					tab_cmp[0][i - 1], tab_cmp[1][i - 1]);
			if (tab_cmp[1][i] > infos->size_res)
				set_res(infos, i, index + 1, tab_cmp[1][i]);
		}
		i++;
	}
}
