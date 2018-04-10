/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 19:42:33 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/11 12:14:02 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int prem;

	i = 2;
	prem = 1;
	if (nb <= 1)
		prem = 0;
	while (i < (nb / 2) && prem == 1)
	{
		if (nb % i == 0)
			prem = 0;
		i++;
	}
	return (prem);
}

int	ft_find_next_prime(int nb)
{
	int prem;
	int i;

	i = -1;
	prem = 0;
	if (nb < 2)
		return (2);
	else
	{
		while (prem == 0)
		{
			i++;
			prem = ft_is_prime(nb + i);
		}
		return (nb + i);
	}
}
