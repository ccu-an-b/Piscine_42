/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:25:12 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/11 11:45:57 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int fact;

	fact = 0;
	if (nb >= 0 && nb <= 12)
	{
		if (nb > 1)
		{
			fact = nb * ft_recursive_factorial(nb - 1);
		}
		else
			return (1);
	}
	return (fact);
}
