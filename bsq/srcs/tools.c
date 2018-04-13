/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:15:01 by jgounand          #+#    #+#             */
/*   Updated: 2017/07/26 22:49:07 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_essentials.h"

int		open_file(char *str)
{
	int	fd;

	fd = open(str, O_RDWR);
	if (fd == -1)
	{
		return (-1);
	}
	return (fd);
}

char	*ft_realloc(int *nbr_malloc)
{
	char	*newstr;
	int		size_malloc;

	size_malloc = 4096;
	(*nbr_malloc) += 1;
	newstr = malloc(sizeof(char) * size_malloc * *nbr_malloc);
	if (!newstr)
		return (NULL);
	clear(newstr, size_malloc * *nbr_malloc);
	return (newstr);
}

char	*ft_copyfrombuf(char *str, char *buf, int *nbr_malloc)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	j = 0;
	newstr = ft_realloc(nbr_malloc);
	while (str[i])
	{
		newstr[j] = str[i];
		i++;
		j++;
	}
	j = 0;
	while (buf[j])
	{
		newstr[i] = buf[j];
		j++;
		i++;
	}
	free(str);
	return (newstr);
}

void	clear(void *str, int size)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = str;
	while (i < size)
	{
		tmp[i] = '\0';
		i++;
	}
}
