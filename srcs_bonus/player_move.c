/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:56:22 by pavicent          #+#    #+#             */
/*   Updated: 2024/06/27 12:39:54 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	player_move_bonus(t_map **map, int x, int y)
{
	char	a;

	a = (*map)->map[y][x];
	check_enemy_bonus(map, a);
	if (a == '0')
	{
		(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = '0';
		(*map)->play.steps += 1;
		ft_printf("Steps: %d points: %d\n", (*map)->play.steps,
			(*map)->play.points);
		return (1);
	}
	if (a == 'C')
	{
		(*map)->map[(*map)->play.y_pos][(*map)->play.x_pos] = '0';
		(*map)->play.steps += 1;
		(*map)->play.points += 1;
		ft_printf("Steps: %d points: %d\n", (*map)->play.steps,
			(*map)->play.points);
		if ((*map)->play.points == (*map)->coin)
			(*map)->map[(*map)->y_exit][(*map)->x_exit] = 'E';
		return (1);
	}
	check_exit_bonus(map, a);
	return (0);
}

void	check_exit_bonus(t_map **map, char a)
{
	if (a == 'E' && (*map)->play.points == (*map)->coin)
	{
		(*map)->play.steps += 1;
		ft_printf("Steps: %d points: %d\n", (*map)->play.steps,
			(*map)->play.points);
		destroy_all_bonus(map);
		free_map_bonus(*map);
		end_message_bonus(1);
		exit(EXIT_SUCCESS);
	}
}

void	end_message_bonus(int i)
{
	if (i == 0)
		ft_printf(RED"\nYou closed the window :(\n"RESET);
	if (i == 1)
	{
		ft_printf(GREEN"▄ ▄ ▄▄▄ ▄ ▄    ▄ ▄ ▄▄▄ ▄ ▄   █         ▀▄ \n"RESET);
		ft_printf(GREEN"█ █ █ █ █ █    █▄█  █  ███   █     ▀    █ \n"RESET);
		ft_printf(GREEN" █  █▄█ █▄█    ███ ▄█▄ █▀█   ▄     ▄    █ \n"RESET);
		ft_printf(GREEN"                                       ▀\n"RESET);
	}
	if (i == 2)
		printlose_bonus();
}

void	check_enemy_bonus(t_map **map, char a)
{
	if (a == 'F')
	{
		(*map)->play.steps += 1;
		ft_printf("Steps: %d points: %d\n", (*map)->play.steps,
			(*map)->play.points);
		destroy_all_bonus(map);
		free_map_bonus(*map);
		end_message_bonus(2);
		exit(EXIT_FAILURE);
	}
}

void	printlose_bonus(void)
{
	ft_printf(RED
		"▓██   ██▓ ▒█████   █    ██     ██▓     ▒█████    ██████ ▓█████\n"
		RESET);
	ft_printf(RED
		" ▒██  ██▒▒██▒  ██▒ ██  ▓██▒   ▓██▒    ▒██▒  ██▒▒██    ▒ ▓█  ▀\n"RESET);
	ft_printf(RED
		" ▒██ ██░▒██░  ██▒▓██  ▒██░   ▒██░    ▒██░  ██▒░ ▓██▄   ▒███\n"RESET);
	ft_printf(RED
		" ░ ▐██▓░▒██   ██░▓▓█  ░██░   ▒██░    ▒██   ██░  ▒   ██▒▒▓█  ▄\n"RESET);
	ft_printf(RED
		" ░ ██▒▓░░ ████▓▒░▒▒█████▓    ░██████▒░ ████▓▒░▒██████▒▒░▒████▒\n"
		RESET);
	ft_printf(RED
		"   ██▒▒▒ ░ ▒░▒░▒░ ░▒▓▒ ▒ ▒    ░ ▒░▓  ░░ ▒░▒░▒░ ▒ ▒▓▒ ▒ ░░░ ▒░ ░\n"
		RESET);
	ft_printf(RED
		" ▓██ ░▒░   ░ ▒ ▒░ ░░▒░ ░ ░    ░ ░ ▒  ░  ░ ▒ ▒░ ░ ░▒  ░ ░ ░ ░  ░\n"
		RESET);
	ft_printf(RED
		" ▒ ▒ ░░  ░ ░ ░ ▒   ░░░ ░ ░      ░ ░   ░ ░ ░ ▒  ░  ░  ░     ░\n"RESET);
	ft_printf(RED
		" ░ ░         ░ ░     ░            ░  ░    ░ ░        ░     ░  ░\n"
		RESET);
	ft_printf(RED
		" ░ ░                         ▐                           ▐\n"RESET);
}
