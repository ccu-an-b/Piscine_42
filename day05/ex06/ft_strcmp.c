/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:44:58 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/17 16:29:43 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	diff = *s1 - *s2;
	return (diff);
}
