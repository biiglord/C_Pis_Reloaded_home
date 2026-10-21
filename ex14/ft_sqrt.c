/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biglord <biglord@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 23:37:15 by biglord           #+#    #+#             */
/*   Updated: 2026/10/22 00:08:57 by biglord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	num = 0;
	while (num * num < nb)
		num++;
	if (num * num == nb)
		return (num);
	else
		return (0);
}

// int	main(void)
// {
// 	int	n = 81;
// 	printf("The square root of %d is %d\n", n, ft_sqrt(n));
// 	return (0);
// }
