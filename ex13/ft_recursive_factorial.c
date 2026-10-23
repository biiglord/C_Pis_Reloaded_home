/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 23:08:11 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/23 14:56:57 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	int	num = 13;

// 	printf("The factorial of %d is %d\n", num, ft_recursive_factorial(num));
// 	return (0);
// }
