/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:50:12 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/22 13:11:15 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

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

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("The difference is: %d\n", ft_strcmp(argv[1], argv[2]));
// 	printf("The difference is also: %d\n", strcmp(argv[1], argv[2]));
// 	return (0);
// }
