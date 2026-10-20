/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biglord <biglord@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 22:00:11 by biglord           #+#    #+#             */
/*   Updated: 2026/10/20 22:25:37 by biglord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}

// int	main(void)
// {
// 	int i;
// 	int k;
// 	int *ptr_1 = &i;
// 	int *ptr_2 = &k;
// 	i = 2;
// 	k = 8;
// 	printf("Initial values: %d and %d\n", i, k);
// 	ft_swap(ptr_1, ptr_2);
// 	printf("Swapped values: %d and %d\n", i, k);
// 	return (0);
// }
