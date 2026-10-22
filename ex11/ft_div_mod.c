/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 22:32:43 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/22 10:43:44 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int a = 10;
// 	int b = 3;
// 	int d = 0;
// 	int m = 0;
// 	int *ptr_d = &d;
// 	int *ptr_m = &m;

// 	printf("Initial numbers: %d, %d, %d, %d\n", a, b, d, m);
// 	printf("-= DIVIDING =-\n");
// 	ft_div_mod(a, b, ptr_d, ptr_m);
// 	printf("New numbers: %d, %d, %d, %d\n", a, b, d, m);
// 	return (0);
// }
