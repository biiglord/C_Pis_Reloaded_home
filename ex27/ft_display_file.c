/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:53:22 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/23 16:17:06 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display(char *str)
{
	int		file_desc;
	int		read_value;
	char	buf[424242];

	file_desc = open(str, O_RDONLY);
	if (file_desc == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	read_value = read(file_desc, buf, 424242);
	while (read_value > 0)
	{
		write(1, buf, read_value);
		read_value = read(file_desc, buf, 424242);
	}
	close(file_desc);
	if (read_value != 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (ft_display(argv[1]));
}
