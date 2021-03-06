/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 21:19:14 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/10 18:58:06 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_init_array(int tab[8][8])
{
	int x;
	int y;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			tab[y][x] = 0;
			x++;
		}
		y++;
	}
}

int		ft_touch_queen(int queen[], int j)
{
	int i;
	int true;

	true = 1;
	i = 0;
	while (i < j)
	{
		if (queen[i] == queen[j])
			true = 0;
		if (queen[i] - queen[j] == (j - i))
			true = 0;
		if (queen[j] - queen[i] == (j - i))
			true = 0;
		i++;
	}
	return (true);
}

void	ft_puttab(int queen[8])
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar(queen[i] + '1');
		i++;
	}
	ft_putchar('\n');
}

int		ft_solver(int tab[8][8], int queen[8], int x)
{
	int sol;
	int i;

	sol = 0;
	if (x == 8)
	{
		sol++;
		ft_puttab(queen);
		ft_init_array(tab);
	}
	else
	{
		i = 0;
		while (i < 8)
		{
			queen[x] = i;
			if (ft_touch_queen(queen, x))
				sol += ft_solver(tab, queen, x + 1);
			i++;
		}
	}
	return (sol);
}

void	ft_eight_queens_puzzle2(void)
{
	int str[8][8];
	int a[8];

	ft_solver(str, a, 0);
}
