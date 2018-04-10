/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 19:52:28 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/27 16:42:06 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *tab2;

	i = 0;
	tab2 = (int*)malloc(sizeof(int) * lenght);
	if (tab2 == NULL)
		return (0);
	while (i < lenght)
	{
		tab2[i] = (*f)(tab[i]);
		i++;
	}
	return (tab2);
}
