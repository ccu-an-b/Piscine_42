/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:27:51 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/11 12:29:06 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	i = 1;
	if (power < 0)
		res = 0;
	else if (power == 0)
		res = 1;
	else
	{
		res = nb;
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
