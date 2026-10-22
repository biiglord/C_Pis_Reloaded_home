/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:19:04 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/22 17:33:35 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// int	main(void)
// {
// 	int	mn = -5;
// 	int	mx = 10;
// 	int	*ranged;
// 	int	i = 0;

// 	ranged = ft_range(mn, mx);
// 	if (!ranged)
// 	{
// 		printf("Oops!!\n");
// 		return (0);
// 	}
// 	printf("The array of ints between %d and %d is:\n", mn, mx);
// 	if (mn == mx)
// 		return (0);
// 	while (mn < mx - 1)
// 	{
// 		printf("%d,", ranged[i]);
// 		mn++;
// 		i++;
// 	}
// 	printf("%d\n", ranged[i]);
// 	return (0);
// }
