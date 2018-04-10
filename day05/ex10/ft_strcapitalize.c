/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:40:09 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/13 10:04:08 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		else if ((str[i] >= 97 && str[i] <= 122) && ((str[i - 1] >= 32 &&
				str[i - 1] <= 47) || (str[i - 1] >= 58 && str[i - 1] <= 64)))
			str[i] -= 32;
		i++;
	}
	return (str);
}
