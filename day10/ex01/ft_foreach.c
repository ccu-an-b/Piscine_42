/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 19:32:19 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/27 15:37:17 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lenght, void (*f) (int))
{
	int i;

	i = 0;
	while (i < lenght)
	{
		(*f)(tab[i]);
		i++;
	}
}
