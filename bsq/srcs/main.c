/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:15:01 by jgounand          #+#    #+#             */
/*   Updated: 2017/07/26 22:49:06 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

void	main_next1(char *str, t_map *ref_map, char **map, char *argv[])
{
	int		argc;
	int		i;

	i = 0;
	argc = ref_map->x_res;
	ref_map->x_res = 0;
	while (++i < argc)
	{
		if (i >= 2)
			ft_putchar('\n');
		str = read_map_argv(argv[i]);
		if (collect_info(str, ref_map) == 0)
		{
			map = copycheckstr(str, ref_map);
			if (map)
				ft_bsq(map, ref_map);
		}
	}
}

int		main(int argc, char *argv[])
{
	t_map	*ref_map;
	char	*str;
	char	**map;

	map = NULL;
	str = NULL;
	ref_map = (t_map*)malloc(sizeof(t_map));
	ref_map->x_res = argc;
	if (argc > 1)
	{
		main_next1(str, ref_map, map, argv);
	}
	else
		return (main_next(str, ref_map, map));
	return (0);
}
