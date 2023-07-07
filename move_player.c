/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egokeri <egokeri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:54:44 by egokeri           #+#    #+#             */
/*   Updated: 2023/06/20 18:49:38 by egokeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_score(t_win *win)
{
	char	*score;

	score = ft_itoa(win->chr->move_count);
	mlx_string_put(win->mlx, win->win, 22, 30, 0xFF0100, score);
	free(score);
}

void	new_map(t_win *win, char **map, int x, int y)
{
	if (map[y][x] == 'C')
			win->map->c_count--;
	if (map[y][x] == 'E' && win->map->c_count == 0)
	{
		win->chr->move_count++;
		ft_printf("%d\n", win->chr->move_count);
		ft_key(53, win);
	}
	map[win->chr->y][win->chr->x] = '0';
	map[y][x] = 'P';
	win->chr->x = x;
	win->chr->y = y;
	win->chr->move_count++;
	ft_printf("%d\n", win->chr->move_count);
}

void	edit_map(int keycode, t_win *win, char **map)
{
	int	x;
	int	y;

	find_player(win, map);
	x = win->chr->x;
	y = win->chr->y;
	if (keycode == 2 || keycode == 124)
		x++;
	else if (keycode == 13 || keycode == 126)
		y--;
	else if (keycode == 1 || keycode == 125)
		y++;
	else if (keycode == 0 || keycode == 123)
		x--;
	if (map[y][x] != '1' && (map[y][x] != 'E' || win->map->c_count == 0))
	{
		new_map(win, map, x, y);
		render_map(win, map, keycode);
	}		
}