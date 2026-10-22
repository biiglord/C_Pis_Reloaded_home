/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:50:12 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/22 11:00:23 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2 [i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
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
