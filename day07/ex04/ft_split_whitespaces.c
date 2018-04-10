/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:48:44 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/22 10:52:33 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str, int i)
{
	int j;

	j = 0;
	while (str[i + j] != '\t' && str[i + j] != '\n' && str[i + j] != ' ' &&
			str[i + j] != '\0')
		j++;
	return (j);
}

int		ft_size_tab(char *str)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		{
			while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
				i++;
		}
		else if (str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
		{
			size += 1;
			while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' &&
					str[i] != '\0')
				i++;
		}
	}
	return (size);
}

int		ft_strdup(char **tab, char *str, int index, int i)
{
	int j;

	j = 0;
	tab[index] = (char*)malloc(sizeof(char) * (ft_strlen(str, i) + 1));
	while (j < ft_strlen(str, i))
	{
		tab[index][j] = str[i + j];
		j++;
	}
	tab[index][j] = '\0';
	return (i + j - 1);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (str)
	{
		tab = (char**)malloc(sizeof(char*) * (ft_size_tab(str) + 1));
		while (str[i] != '\0')
		{
			if (str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
			{
				i = ft_strdup(tab, str, k, i);
				k++;
			}
			i++;
		}
		tab[k] = NULL;
	}
	else
		tab = NULL;
	return (tab);
}
