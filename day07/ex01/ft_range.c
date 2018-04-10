/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:46:24 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/22 10:51:51 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int*)malloc(sizeof(int) * (size));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
