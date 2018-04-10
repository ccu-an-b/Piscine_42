/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:56:27 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/09 15:22:44 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;

	if (power < 0)
		res = 0;
	else if (power == 0)
		res = 1;
	else
		res = nb * ft_recursive_power(nb, (power - 1));
	return (res);
}
