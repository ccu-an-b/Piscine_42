/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 22:16:28 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/21 09:34:33 by ccu-an-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

# define TRUE 1
# define FALSE 0
# define EVEN(x) ((x % 2 == 0) ? TRUE : FALSE)

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0
#endif
