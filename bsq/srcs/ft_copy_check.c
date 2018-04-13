/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:47:15 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 22:49:00 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

char		**copycheckstr(char *str, t_map *ref_map)
{
	char		**tab;
	t_tools		*tools;
	int			tmp;

	tools = malloc(sizeof(t_tools));
	if (!tools)
		return (0);
	tools->i = 0;
	tools->j = 0;
	tools->k = 0;
	tools->l = 0;
	tab = malloctab(ref_map);
	if (!tab)
		return (0);
	tab = copycheckstr2(str, ref_map, tools, tab);
	if (!tab)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	tmp = ref_map->width;
	ref_map->width = ref_map->lenght;
	ref_map->lenght = tmp;
	return (tab);
}

char		**copycheckstr2(char *str, t_map *ref_map, t_tools *tools,
	char **tab)
{
	int	m;

	while (str[tools->i] != '\n')
		tools->i = tools->i + 1;
	tools->i = tools->i + 1;
	while (str[tools->i] && (str[tools->i] == ref_map->ref_char[0] ||
				str[tools->i] == ref_map->ref_char[1] || str[tools->i] == '\n'))
	{
		if (str[tools->i] == '\n')
		{
			if (tools->k != ref_map->width)
				return (0);
			tools->j = tools->j + 1;
			tools->k = 0;
		}
		else
		{
			m = copycheck2_1(str, ref_map, tools, tab);
			if (m)
				return (0);
		}
		tools->i = tools->i + 1;
	}
	return (copycheck2_2(str, ref_map, tools) ? tab : 0);
}

int			copycheck2_1(char *str, t_map *ref_map, t_tools *tools, char **tab)
{
	if (tools->j == ref_map->lenght)
		return (1);
	if (str[tools->i] == ref_map->ref_char[0])
		tools->l = tools->l + 1;
	tab[tools->j][tools->k] = str[tools->i];
	tools->k = tools->k + 1;
	return (0);
}

int			copycheck2_2(char *str, t_map *ref_map, t_tools *tools)
{
	if (tools->j != ref_map->lenght)
		return (0);
	if (tools->l == 0)
		return (0);
	if (str[tools->i] != '\0')
		return (0);
	return (1);
}

int			main_next(char *str, t_map *ref_map, char **map)
{
	str = read_map_stdout(0);
	if (collect_info(str, ref_map))
		return (0);
	map = copycheckstr(str, ref_map);
	if (map == 0)
		return (0);
	ft_bsq(map, ref_map);
	return (0);
}
