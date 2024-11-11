/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:10:58 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/10/05 16:07:25 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	int		bytes;
	char	buffer[4096];

	if (ac < 2)
	{
		write (1, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write (1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	bytes = read(fd, buffer, 4096);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, 4096);
	}
	if (bytes < 0)
		return (0);
	close(fd);
	return (0);
}
