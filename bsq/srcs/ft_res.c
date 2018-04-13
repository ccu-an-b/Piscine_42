/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_res.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:59:18 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 22:49:02 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

void	set_first_res(int *map_conv, t_map *infos)
{
	int i;

	i = 0;
	infos->size_res = 0;
	while (i < infos->lenght && map_conv[i] == 0)
		i++;
	if (i != infos->lenght)
	{
		infos->y_res = 0;
		infos->x_res = i;
		infos->size_res = 1;
	}
}

void	set_res(t_map *res, int x, int y, int size)
{
	res->x_res = x;
	res->y_res = y;
	res->size_res = size;
}

void	ft_tab_res(char **tab_res, t_map *infos)
{
	int x;
	int y;
	int i;

	y = infos->y_res - infos->size_res + 1;
	while (y <= infos->y_res)
	{
		x = infos->x_res - infos->size_res + 1;
		while (x <= infos->x_res)
		{
			tab_res[y][x] = infos->ref_char[2];
			x++;
		}
		y++;
	}
	i = 0;
}
