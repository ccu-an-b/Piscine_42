/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:17:29 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/11 11:43:50 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	i = 1;
	fact = nb;
	if (nb == 0)
		fact = 1;
	else if (nb > 0 && nb <= 12)
	{
		while (i < nb - 1)
		{
			fact = fact * (nb - i);
			i++;
		}
	}
	else
		fact = 0;
	return (fact);
}
