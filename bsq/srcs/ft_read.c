/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:54:55 by jgounand          #+#    #+#             */
/*   Updated: 2017/07/26 22:49:01 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

char		**malloctab(t_map *ref_map)
{
	char	**tab;
	int		j;

	tab = malloc(sizeof(char*) * (ref_map->lenght) + 1);
	if (!tab)
		return (0);
	clear(tab, ref_map->lenght + 1);
	j = 0;
	while (j < ref_map->lenght)
	{
		tab[j] = malloc(sizeof(char**) * (ref_map->width) + 1);
		if (!tab[j])
			return (0);
		j++;
	}
	return (tab);
}

int			exist2lines(char *str)
{
	int	i;
	int	line;

	line = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			line++;
		if (line > 2)
			return (0);
		i++;
	}
	return (1);
}

int			onlynumbers(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
	}
	if (str[i] == '\0')
		return (0);
	return (1);
}

char		*read_map_argv(char *str)
{
	int		fd;
	char	*copie;

	fd = open_file(str);
	if (!fd)
		return (NULL);
	copie = read_map_stdout(fd);
	fd = close(fd);
	if (fd == -1)
		return (NULL);
	return (copie);
}

char		*read_map_stdout(int fd)
{
	int		ret;
	char	*copie;
	int		nbr_malloc;
	int		*ptr_nbr_malloc;
	char	buf[4096 + 1];

	ptr_nbr_malloc = &nbr_malloc;
	nbr_malloc = 1;
	copie = (char*)malloc(sizeof(char) * 4096 + 1);
	clear(copie, 4096 + 1);
	while ((ret = read(fd, buf, 4096)))
	{
		if (ret == 0)
			return (copie);
		buf[ret] = '\0';
		copie = ft_copyfrombuf(copie, buf, ptr_nbr_malloc);
		clear(buf, 4096 + 1);
	}
	return (copie);
}
