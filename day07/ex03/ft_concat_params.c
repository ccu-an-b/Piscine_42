/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:33:16 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/22 10:34:01 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nbr_car(int argc, char**argv);

char	*ft_concat_params(int argc, char **argv)
{
	int		lenght;
	char	*str;
	int		i;
	int		j;
	int		cpt;

	lenght = ft_nbr_car(argc, argv);
	str = (char*)malloc(sizeof(*str) * (lenght + 1));
	i = 1;
	cpt = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[cpt++] = argv[i][j];
			j++;
		}
		if (i == argc - 1)
			str[cpt] = '\0';
		else
			str[cpt++] = '\n';
		i++;
	}
	return (str);
}

int		ft_nbr_car(int argc, char **argv)
{
	int i;
	int j;
	int cpt;

	i = 1;
	j = 0;
	cpt = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j - 1])
		{
			cpt++;
			j++;
		}
		i++;
	}
	return (cpt);
}
