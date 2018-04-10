/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 13:18:21 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/27 18:06:15 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int croissant;
	int decroissant;

	i = 0;
	croissant = 1;
	decroissant = 1;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			croissant = 0;
		i++;
	}
	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			decroissant = 0;
		i++;
	}
	return (decroissant || croissant);
}
