/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_essentials.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 13:43:33 by ccu-an-b          #+#    #+#             */
/*   Updated: 2017/07/26 21:10:43 by jgounand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ESSENTIALS_H
# define FT_ESSENTIALS_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int				ft_strlen(char *str);
int				ft_atoi(char *str);
int				ft_int_cmp(int a, int b, int c);
void			ft_tabcpy(int *dest, int *src, int lenght);
char			*ft_strcpy(char *dest, char *src);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				**ft_create_tab_2(int lenght, int width);
void			ft_print_char_tab(char **tab, int lenght, int width);

typedef struct	s_map
{
	int			x_res;
	int			y_res;
	int			size_res;
	char		ref_char[3];
	int			lenght;
	int			width;

}				t_map;

void			set_struct_null(t_map *infos);
void			set_first_res(int *map_conv, t_map *infos);
void			set_res(t_map *res, int x, int y, int size);
void			ft_tab_solver(int **tab_cmp, t_map *infos, int index);
void			ft_tab_res(char **tab_res, t_map *infos);
int				*ft_tab_map_conv(int index, char **map, t_map *infos);
void			ft_tab_cmp_init(int index, int **tab_cmp,
									char **map, t_map *infos);
void			ft_bsq(char **map, t_map *infos);

typedef	struct	s_tools
{
	int i;
	int	j;
	int	k;
	int	l;
}				t_tools;

int				collect_info(char *str, t_map *ref_map);
int				open_file(char *str);
char			*read_map_argv(char *str);
char			*ft_realloc(int *nbr_malloc);
char			*read_map_stdout(int fd);
char			*ft_copyfrombuf(char *str, char *buf, int *nbr_malloc);
void			clear(void *str, int size);
int				onlynumbers(char *str);
int				collect_info_line1(char *str, t_map *ref_map);
int				collect_info_line2(char *str, t_map *ref_map);
int				exist2lines(char *str);
char			**malloctab(t_map *ref_map);
char			**copycheckstr(char *str, t_map *ref_map);
char			**copycheckstr2(char *str, t_map *ref_map,
								t_tools *tools, char **tab);
int				copycheck2_1(char *str, t_map *ref_map, t_tools *tools,
								char **tab);
int				copycheck2_2(char *str, t_map *ref_map, t_tools *tools);
int				main_next(char *str, t_map *ref_map, char **map);

#endif
