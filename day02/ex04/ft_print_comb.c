/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:36:08 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/06 18:28:25 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_putchar_multi(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
	return (0);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar_multi(a, b);
				ft_putchar(c);
				if (a != '7' || b != '8' || c != '9')
				{
					ft_putchar_multi(',', ' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
