/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:58:36 by fmalungo          #+#    #+#             */
/*   Updated: 2024/08/24 13:07:18 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/so_long.h"

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *)s;
	i = -1;
	while (++i < n)
		string[i] = (char)c;
	return (s);
}



int	main(int ac, char *av[])
{
	t_display	screen;

	if (ac != 2)
		exit(1);
	ft_memset(&screen, 0, sizeof(t_display));
	if (check_extension(av[1]) == false)
	{
		ft_printf("Error\nInvalid Extension\n");
		exit(1);
	}
	screen.map = map_reader(av[1]);
	if (NULL == screen.map)
	{
		ft_printf("Error\nConfiguration's map is invalid");
		free_and_exit(&screen, false);
	}
	screen.height = window_size(screen.map, 'h');
	screen.width = window_size(screen.map, 'w');
	map_validator(&screen);
	screen.mlx = mlx_init();
	screen.mlx_win = mlx_new_window(screen.mlx, screen.width, screen.height,
			"so_long");
	load_img_to_struct(&screen);
	render_img_on_screen(&screen);
	return (0);
}
