/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:36:48 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/17 09:15:15 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*temp;
	char	*res;

	if (*to_find == '\0')
		return (0);
	while (*str != '\0')
	{
		if (*to_find == *str)
		{
			res = str;
			temp = to_find;
			i = 0;
			while (res[i] == *temp)
			{
				temp++;
				i++;
				if (*temp == '\0')
					return (res);
			}
		}
		str++;
	}
	return (0);
}
