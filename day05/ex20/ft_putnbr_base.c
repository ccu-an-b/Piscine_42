/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:01:48 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/17 09:57:26 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_conv_base(int nbr, int div, char *base)
{
	int ntrue;

	ntrue = 0;
	while (div != 0)
	{
		if (nbr / div != 0)
		{
			ft_putchar(base[nbr / div]);
			nbr = nbr % div;
			ntrue = 1;
		}
		else if (ntrue != 0)
			ft_putchar(base[0]);
		div = div / ft_strlen(base);
	}
}

int		ft_ok_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (1);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int nbase;

	nbase = ft_strlen(base);
	if (ft_ok_base(base) == 0)
	{
		if (nbr < 1)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		nbase = nbase * nbase * nbase * nbase * nbase * nbase * nbase;
		if (nbr == 0)
			ft_putchar(base[0]);
		else
			ft_conv_base(nbr, nbase, base);
		ft_putchar('\n');
	}
}
