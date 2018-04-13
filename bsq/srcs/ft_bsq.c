/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 15:59:27 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 22:48:58 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

void	set_struct_null(t_map *infos)
{
	infos->x_res = 0;
	infos->y_res = 0;
	infos->size_res = 0;
	infos->lenght = 0;
	infos->width = 0;
}

void	ft_bsq(char **map, t_map *infos)
{
	int i;
	int **tab_cmp;
	int	*map_conv;

	i = 0;
	tab_cmp = ft_create_tab_2(infos->lenght, 2);
	map_conv = ft_tab_map_conv(0, map, infos);
	set_first_res(map_conv, infos);
	while (i < infos->width - 1)
	{
		ft_tab_cmp_init(i, tab_cmp, map, infos);
		ft_tab_solver(tab_cmp, infos, i);
		i++;
	}
	ft_tab_res(map, infos);
	ft_print_char_tab(map, infos->lenght, infos->width);
	set_struct_null(infos);
}
