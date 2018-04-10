/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:47:25 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/22 10:51:37 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *tab;
	int i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int*)malloc(sizeof(*tab) * (size));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
