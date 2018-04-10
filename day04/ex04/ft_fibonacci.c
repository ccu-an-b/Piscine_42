/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:24:16 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/11 12:33:35 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int res;

	if (index < 0)
		res = -1;
	else if (index == 0)
		res = 0;
	else if (index == 1 || index == 2)
		res = 1;
	else
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
