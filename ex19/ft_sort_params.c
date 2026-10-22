/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:30:38 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/22 13:11:40 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putarg(char **arg, int c)
{
	int	i;

	i = 1;
	while (i < c)
	{
		ft_putstr(arg[i]);
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] || s2[i])
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 - c2 != 0)
			return (c1 - c2);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		swap;
	char	*temp;

	swap = 1;
	while (swap == 1)
	{
		swap = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
	}
	ft_putarg(argv, argc);
	return (0);
}
