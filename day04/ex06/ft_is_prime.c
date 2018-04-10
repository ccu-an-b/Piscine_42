/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:55:09 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/11 12:03:42 by ccu-an-b         ###   ########.fr       */
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