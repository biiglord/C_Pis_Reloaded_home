/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:34:38 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/22 17:07:18 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dupe;
	int		i;

	dupe = malloc(ft_strlen(src) + 1);
	if (!dupe)
		return (dupe);
	i = 0;
	while (src[i])
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}

// int	main(void)
// {
// 	char	*str1 = " j j j j";
// 	char	*str2 = ft_strdup(str1);
// 	printf("This is a string: %s\n", str1);
// 	printf("This is also a string: %s\n", str2);
// 	return (0);
// }
