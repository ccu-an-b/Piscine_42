/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:50:47 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/23 11:13:31 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_power_base(int base, int nb)
{
	int div;
	int power;

	div = 1;
	power = 0;
	if (nb < 0)
		nb = nb * -1;
	while (div <= nb)
	{
		div = div * base;
		power += 1;
	}
	return (power);
}

char	*ft_conv_new(int nbr, int i, char *base_to, char *new_nbr)
{
	int div;
	int nbr_before;

	div = 1;
	if (nbr < 0)
		nbr = nbr * -1;
	nbr_before = nbr;
	while (div <= nbr)
		div = div * ft_strlen(base_to);
	while (div != 0)
	{
		if (nbr / div != 0)
		{
			new_nbr[i] = base_to[nbr / div];
			nbr = nbr % div;
			i++;
		}
		else if (nbr_before != nbr)
		{
			new_nbr[i] = (base_to[0]);
			i++;
		}
		div = div / ft_strlen(base_to);
	}
	return (new_nbr);
}

int		ft_conv_deci(char *nbr, char *base_from, int base)
{
	int i;
	int j;
	int nb;
	int ngtrue;

	i = 0;
	nb = 0;
	ngtrue = 1;
	while (nbr[i] != '\0')
	{
		if (nbr[i] == '-')
			ngtrue = -1;
		j = 0;
		while (base_from[j] != '\0')
		{
			if (base_from[j] == nbr[i])
			{
				nb = nb * base;
				nb = nb + j;
			}
			j++;
		}
		i++;
	}
	return (nb * ngtrue);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*new_nbr;
	int		power;

	nb = ft_conv_deci(nbr, base_from, ft_strlen(base_from));
	power = ft_power_base(ft_strlen(base_to), nb);
	new_nbr = NULL;
	if (nb == 0)
	{
		new_nbr = (char*)malloc(sizeof(char) * 1);
		new_nbr[0] = base_to[0];
	}
	else if (nb < 0)
	{
		new_nbr = (char*)malloc(sizeof(char) * power + 1);
		new_nbr[0] = '-';
		new_nbr = ft_conv_new(nb, 1, base_to, new_nbr);
	}
	else
	{
		new_nbr = (char*)malloc(sizeof(char) * power);
		new_nbr = ft_conv_new(nb, 0, base_to, new_nbr);
	}
	return (new_nbr);
}
