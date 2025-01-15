/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:50:57 by fmalungo          #+#    #+#             */
/*   Updated: 2024/08/24 11:36:19 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

int	window_size(char **map, char flag)
{
	int	i;

	i = 0;
	if (flag == 'w')
	{
		while (map[0][++i])
			;
		return (i * 50);
	}
	else if (flag == 'h')
	{
		while (map[++i])
			;
		return (i * 50);
	}
	return (0);
}

bool	check_extension(char *path)
{
	int			len;

	len = ft_strlen(path);
	if (path[len - 1] != 'r' || path[len - 2] != 'e'
		|| path[len - 3] != 'b' || path[len - 4] != '.')
		return (false);
	if (path[len - 5] == '/' || !(path[len - 5]))
		return (false);
	return (true);
}
